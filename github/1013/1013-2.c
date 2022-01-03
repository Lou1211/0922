#include<stdio.h>

int main(void){
    float n,max,min;
    scanf("%f",&n);
    max=n;
    min=n;
    for (int i=1;i<10;i+=1)
    {
        scanf("%f",&n);
        if (n>max)
        {
            max=n;
        }
        if (n<min)
        {
            min=n;
        }
    }
    printf("max: %.2f\n",max);
    printf("min: %.2f\n",min);
}