#include<stdio.h>

int main(void){
    int n,f;
    scanf("%d",&n);
    f=n;
    while (f>1)
    {
        f=f-1;
        
        n=n*f;
    }
    printf("%d",n);
}