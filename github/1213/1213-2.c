#include <stdio.h>

int main()
{
    int A;
    scanf("%d", &A);
    int B = A;
    int a[A][A];
    int i = 0;
    int j = 0;
    int c = 1;
    while (c <= B * B)
    {
        for (; j < A; j++)
        {
            a[i][j] = c;
            c++;
            //printf("(%d,%d)=%3d\n", i, j, a[i][j]);
        }
        i++;
        j--;
        for (; i < A; i++)
        {
            a[i][j] = c;
            c++;
            //printf("(%d,%d)=%3d\n",i,j,a[i][j]);
        }
        j--;
        i--;
        for (; j >= B - A ; j--)
        {
            a[i][j] = c;
            c++;
            //printf("(%d,%d)=%3d\n",i,j,a[i][j]);
        }
        i--;
        j++;
        for (; i >= B - A + 1; i--)
        {
            a[i][j] = c;
            c++;
            //printf("(%d,%d)=%3d\n",i,j,a[i][j]);
        }
        A--;
        j++;
        i++;
    }
    for (int g = 0; g < B; g++)
    {
        for (int p = 0; p < B; p++)
        {
            printf("%3d", a[g][p]);
        }
        puts("");
    }
    for (int q = 0; q < B; q++)
    {
        //printf("%3d",a[q][0]);
    }
}