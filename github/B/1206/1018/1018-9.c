#include<stdio.h>

int main(){
    int n,m,b,s,a;
    scanf("%d%d",&m,&n);
    s=n*m;
    a=m;
    b=n;
    while (n!=0)
    {
        int r=m%n;
        m=n;
        n=r;
    }
        printf("%d\n%d\n",m,s/m);
}