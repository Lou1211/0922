#include<stdio.h>

int main(){
    int a,b,c,d,e,s=0;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int arr1[a][b],arr2[c][d];
    for (int i = 0; i < a ; i++)
    {
        for (int j = 0; j < b ; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    for (int i = 0; i < c ; i++)
    {
        for (int j = 0; j < d ; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            for (int x = 0; x < b; x++)
            {
                e=arr1[i][x]*arr2[x][j];
                s=e+s;
            }
            printf("%4d\t",s);
            s=0;
        }  
        puts("");
    }
}