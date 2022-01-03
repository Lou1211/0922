#include<stdio.h>

int main(){
    char a[100],b[100];
    int c[100]={0};
    gets(a);
    gets(b);
    int i=0,j=0,k=0,r=1;
    int check=0;
    while (r)
    {
        if (a[i]=='\0'&&b[j]!='\0')
        {
            i=0;
            check++;
        }
        if (a[i]!='\0'&&b[j]=='\0')
        {
            j=0;
            check++;
        }
        if (a[i]=='\0'&&b[j]=='\0'||check==2)
        {
            r=0;
        }
        c[k]=a[i]^b[j];
        //printf("%d,(%d,%d)\n",c[k],i,j);
        k++;
        i++;
        j++;
    }
    for (int p = 0; p < k-1; p++)
    {
        printf("%03d",c[p]);
    }
    printf("-01\n");
}