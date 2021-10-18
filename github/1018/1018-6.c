#include<stdio.h>

int main(){
    int n,a,b=1;
    scanf("%d",&n);
    n=n*2;
    double s=0;
    for (a=2;a<=n;a+=2)
    {
        s=s+(double)1/(a*b);
        b+=2;
    }
    printf("%.16lf\n",s);
}