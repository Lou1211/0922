#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b;
    int q;
    scanf("%d%d",&a,&b);
    int arr1[a][b];
    int arr2[b][a];
    int seed;
    scanf("%d",&seed);
    srand(seed);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            arr1[i][j]=rand()%100+1;
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b ; j++)
        {
            arr2[j][i]=arr1[i][j];
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b ; j++)
        {
            printf("%4d",arr1[i][j]);
        }
        puts("");
    }
    printf("----------\n");
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a ; j++)
        {
            printf("%4d",arr2[i][j]);
        }
        puts("");
    }
}