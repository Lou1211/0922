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
    if (c>=b)
    {
        printf("YES, %d\n",c);
    }
    else
    {
        printf("NO, %d\n",c);
    }
}