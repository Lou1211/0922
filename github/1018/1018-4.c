#include<stdio.h>

int main(){
    unsigned long long int s;
    int n; 
    scanf("%d",&n);
    s=n;
    for (int a=n-1;a>1;a--)
    {
        s=s*a;
    }
    printf("%lld\n",s);
}