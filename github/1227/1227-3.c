#include <stdio.h>
#include<string.h>

int main()
{
    char a[100], b[100];
    int c[100],d;
    int i = 0, j = 0, k = 0, r = 1,m=0;
    while (scanf("%3d",&d))
    {
        if (d==-1)
        {
            break;
        }
        c[m]=d;
        //printf("c[%d]=%d\n",m,c[m]);
        m++;
    }
    scanf("%d",&d);
    gets(b);
    while (r)
    {
        if (b[j]=='\0')
        {
            j=0;
        }
        if (k==m-1)
        {
            r=0;
        }
        a[i]=c[k]^b[j];
        //printf("%d,(%d,%d)\n",c[k],j,k);
        k++;
        i++;
        j++;
    }
    puts(a);
}
