#include<stdio.h>
#include<string.h>

int main(){
    int SIZE;
    scanf("%d",&SIZE);
    int arr[SIZE];
    int *arrPrt=&arr[0];
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d",&arr[i]);
    }
    int A;
    scanf("%d",&A);
    for (int i = 0; i <= SIZE; i++)
    {
        int *arrPrtA=&arr[i];
        if (A==*arrPrtA)
        {
            printf("%d position.\n",arrPrtA-arrPrt+1);
            break;
        }
        if (i==SIZE)
        {
            printf("none\n");
        }
    }
}