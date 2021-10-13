#include<stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    for(int a=0;a<=n-1;a++){
        for(int b=1;b<=n-1-a;b++){
            printf(" ");
        }
        for(int c=0;c<=a*2;c++){
            printf("*");
        }
        puts("");
    }
}