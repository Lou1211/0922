#include<stdio.h>

int main(void){
    int n,c=0,m=0;
    scanf("%d",&n);
    m=n;
    for(int a=n;a>0;a--){
        c=0;
        for (int i=n-1;i>0;i--)
        {
            printf(" ");
            c+=1;
        }
        for(int a=0;a<m-c;a++)
        {
            printf("*");
        }
        puts("");
        n=n-1;
    }
}