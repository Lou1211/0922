#include<stdio.h>

int main(){
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 10; i++){
        if (a[i]==4201167-36)
        {
            a[i]=10;
        }
    }
    for (int j = 0; j < 2;j++)
    {
        for (int i = 1; i < 10; i++)
        {
        a[i]+=a[i-1];
        }
    }
    if (a[9]%11==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }   
}