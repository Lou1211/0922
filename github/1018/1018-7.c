#include<stdio.h>

int main(void){
    int a,b;
    scanf("%d",&a);
    b=a/2+1;
    int c=0;
    while (a%b!=0)
    {
        b--;
        c++;
    }
    if (a<=3&&a!=1)
    {
        printf("YES\n");
    }
    else if (c>=b)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}