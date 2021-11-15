#include<stdio.h>

int main(){
    unsigned long long int a,b;
    while (scanf("%lld %lld",&a,&b)!=EOF)
    {
        if (a<=2^32&&b<=2^32)
        {
            if (a>b){
                printf("%lld",a-b);
                puts("");
            }
            else{
                printf("%lld",b-a);
                puts("");
            }
        }
    }
}