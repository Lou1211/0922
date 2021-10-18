#include<stdio.h>

int main(){
    int a,s=0,n;
    scanf("%d",&n);
    for (a=n+1;a>=2;a--)
    {
        s=s+n*a;
        n--;
    }
    printf("%d\n",s);
}