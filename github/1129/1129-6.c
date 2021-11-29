#include<stdio.h>

int main(){
    int e,s=0;
    int arr1[3][3],arr2[3][3];
    for (int i = 0; i < 3 ; i++)
    {
        for (int j = 0; j < 3 ; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    for (int i = 0; i < 3 ; i++)
    {
        for (int j = 0; j < 3 ; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int x = 0; x < 3; x++)
            {
                int *aPrt=&arr1[i][x];
                int *bPrt=&arr2[x][j];
                e=*aPrt**bPrt;
                s=e+s;
            }
            printf("%4d\t",s);
            s=0;
        }  
        puts("");
    }
}