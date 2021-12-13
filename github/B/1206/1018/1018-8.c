#include<stdio.h>

int main(){
    int n,a,b=1,c=0,s,u=0;
    scanf("%d",&n);
    s=n;
    while (n>=1)
    {
        c++;
        n=n/10;
    }
    printf("%d\n",c);
    for (int i=1;i<c;i++)
    {
        b=b*10;
    }
    n=0;
    for (int i=1;i<=c;i++)
    {
        n=s/b;
        u=n+u;
        s=s-b*n;
        b=b/10;
    }
    printf("%d\n",u);
}