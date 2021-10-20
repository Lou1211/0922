#include<stdio.h>

int main(void){
    int a,b,c,e;
    scanf("%d%d",&a,&b);
    printf("%d\n",a222(a,b));
}
int a222(int a,int e){
    int b=1,c=1,d=1;
    for (int i=1; i<=a;i++)
    {
        b=b*i;
    }
    for (int i=1; i<=e;i++)
    {
        c=c*i;
    }
    for (int i=1; i<=a-e;i++)
    {
        d=d*i;
    }
    e=(b/c)/d;
    return e;
}