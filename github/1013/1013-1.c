#include<stdio.h>

int main(void){
    int n,m;
    scanf("%d%d",&n,&m);
    for (int i=n+n%2;i<=m;i+=2)
    {
        printf("%d\n",i);
    }
    
}