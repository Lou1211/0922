#include<stdio.h>

int main(){
    int n,a,b,c=1;
    scanf("%d",&n);
    for (b=1;b<=n;b++)
    {
        for (a=1;a<=n;a++)
    {
        printf("%d\t",a*c);
    }
    puts("");
    c++;
    }
    puts("");
}