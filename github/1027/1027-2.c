#include<stdio.h>

int a;

int square(int data[]){
    for (int i=0; i<a; i++)
    {
        printf("%d ",data[i]*data[i]);
    }
    puts("");
}

int main(void){
    scanf("%d",&a);
    int fun[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&fun[i]);
    }
    square(fun);
}