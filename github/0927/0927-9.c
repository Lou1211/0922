#include <stdio.h>

int main(void){
    int x;
    scanf("%d",&x);
    int A=x/1000;
    int B=(x-(1000*A))/100;
    int C=(x-(1000*A)-(100*B))/10;
    int D=x%10;
    int a=(A+7)%10;
    int b=(B+7)%10;
    int c=(C+7)%10;
    int d=(D+7)%10;
    printf("%d%d%d%d",c,d,a,b);
}