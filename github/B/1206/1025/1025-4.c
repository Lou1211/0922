#include<stdio.h>

int A(int a,int m){
    if(a==1){
        a=2;
    }
    for (;a<=m;a++)
    {
        int i = 2;
        for (;i<=a/2&&a%i!=0;)
        {
            i++;
        }
        if (i>=a/2&&a%i!=0||a==2)
        {
            printf("%d ",a);
        }
    }
    puts("");
}

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        A(b,a);
    }
    else{
        A(a,b);
    }
    
}