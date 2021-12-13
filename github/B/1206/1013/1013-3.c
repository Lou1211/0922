#include<stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    for (int i=n;i>0;i--)
    {
        for (int i=n;i>0;i--)
        {
        printf("*");
        }
        puts("");
        n=n-1;
    }
    
}