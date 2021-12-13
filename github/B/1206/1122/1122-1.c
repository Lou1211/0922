#include<stdio.h>

void bubble(int SIZE,float *a){
    void swap(float *Prt1,float *Prt2);
    int d;
    int i;
    for (d = 0; d < SIZE-1; d++)
    {
        for ( i = 0; i < SIZE-1; i++)
        {
            if (a[i]>a[i+1])
            {
                swap(&a[i],&a[i+1]);
            }
        }
    }
}

void swap(float *Prt1,float *Prt2){
    float table=*Prt1;
    *Prt1=*Prt2;
    *Prt2=table;
}

int main(){
    int SIZE;
    scanf("%d",&SIZE);
    float a[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%f",&a[i]);
    }
    bubble(SIZE,a);
    for (int i = 0; i < SIZE; i++)
    {
        printf("%g",a[i]);
        printf(" ");
    }
    puts("");
}