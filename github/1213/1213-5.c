#include <stdio.h>

int main()
{
    int A, B, c, counter=0;
    scanf("%d%d%d", &A, &B, &c);
    int a[A][B];
    for (int i = 0; i < A; i++)
    {
        for (int j = 0; j < B; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int *aPtr=&a[0][0];
    for (int i = 0; i < A*B; i++)
    {
        if (c==*(aPtr+i))
        {
            printf("%d %d\n",i/B,i%B);
            counter++;
        }
        
    }
    if (counter==0)
    {
        printf("-1 -1\n");
    }
    
}