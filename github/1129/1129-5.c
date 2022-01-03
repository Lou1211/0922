#include <stdio.h>
#include <string.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int arra[a][b], arrb[a][b];
    int P[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
           scanf("%d",&arra[i][j]);
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d",&arrb[i][j]);
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            int *aPtr = &arra[i][j];
            int *bPtr = &arrb[i][j];
            P[i][j] = *aPtr + *bPtr;
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%3d\t", P[i][j]);
        }
        puts("");
    }
}
