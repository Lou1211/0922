#include<stdio.h>

int A(int a,int b){
    unsigned long long int data[13]={0000000000000};
    for (int i=12;i>=0;i--)
    {
        data[i]=a%b;
        a=a/b;
    }
    for(int r=0;r<=12;r++){
    printf("%lld",data[r]);
    }
    puts("");
}

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    A(a,b);
}