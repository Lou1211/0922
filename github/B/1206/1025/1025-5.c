#include<stdio.h>

int A(int a){
    int i=2,n=2,s=0,c=0,d=0;
    for (n;n<=a;n++)
    {
        int i = 2;
        for (;i<=n/2&&n%i!=0;)
        {
            i++;
        }
        if (i>=n/2&&n%i!=0||n==2)
        {
            if (a%n==0&&n<=a/n)
            {
                c=n,d=a/n;
                s++;
            }
        }
    }
        if (s==1)
        {
            printf("%d %d",c,d);
        }
        else
            {
                printf("No");
            }
}
int main(){
    int a;
    scanf("%d",&a);
    A(a);
}