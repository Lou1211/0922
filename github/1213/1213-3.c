#include <stdio.h>

int w = 0;

void fun(int A, int a[A][A], int i, int j)
{
    int c = 0;
    for (int q = 0; q < A; q++)
    {
        if (a[q][j] != a[i][j])
        {
            if (a[q][j] < a[i][j])
            {
                c++;
            }
        }
        if (a[i][q] != a[i][j])
        {
            if (a[i][q] > a[i][j])
            {
                c++;
            }
        }
    }
    if (c == 0)
    {
        printf("(%d,%d) = %d\n", i, j, a[i][j]);
        w++;
    }
}

int main()
{
    int A;
    scanf("%d", &A);
    int a[A][A];
    for (size_t i = 0; i < A; i++)
    {
        for (size_t j = 0; j < A; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (size_t i = 0; i < A; i++)
    {
        for (size_t j = 0; j < A; j++)
        {
            fun(A, a, i, j);
        }
    }
    if (w == 0)
    {
        printf("NONE\n");
    }
}