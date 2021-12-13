#include<stdio.h>

int main(){
    int n,b=0;
    scanf("%d",&n);
    char data[]="00000000";
    for (int i=7;i>=0;i--)
    {
        b=n%2;
        if (b==1)
        {
            data[i]='1';
            n=(n-1)/2;
        }
        else{
            n=n/2;
        }
    }
    printf("%s\n",data);
}