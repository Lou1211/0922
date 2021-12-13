#include<stdio.h>

int main(){
    int a,b=-2000000,d=1;
    scanf("%d",&a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 1; i <= a; i++)
    {
        for (int c = 0; c < a-i+1; c++)
        {
            d=1;
            for (int q = c; q < a; q++)
            {
                d=d*arr[q];
            }
            if (b<d)
            {
                b=d;
            }
        }
    }
    printf("%d\n",b);
}