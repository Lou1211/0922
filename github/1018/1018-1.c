#include<stdio.h>

int main(){
    int a,n,s=0;
    scanf("%d",&n);
    for (a=3;a<n;a+=3)
    {
        s=a+s;
    }
    printf("%d\n",s);
    
}