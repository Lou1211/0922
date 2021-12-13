#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    int a[A][B];
    for (size_t i = 0; i < A; i++)
    {
        for (size_t j = 0; j < B; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int counter = 0;
    for (size_t i = 0; i < A; i++)
    {
        for (size_t j = 0; j < B; j++)
        {
            int *aPtr = a[i][j];
            if (aPtr == C)
            {
                counter++;
            }
        }
    }
    printf("%d\n", counter);
}