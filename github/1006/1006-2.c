#include<stdio.h>

int main(void){
    int n,m=0;
    while (n%13!=0)
    {
        scanf("%d",&n);
        m++;
    }
    printf("%s%d%s\n","共輸入了",m,"筆資料");
}