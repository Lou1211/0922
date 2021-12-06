#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int f(int n)
{
    if (n == 2)
    {
        return 1;
    }
    if (n % 2 == 0 || n == 1)
    {
        return 0;
    }
    for (int i = 3; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a / 2 + 1; i++)
    {
        if (f(i))
        {
            if (f(a - i))
            {
                printf("%d+%d\n", i, a - i);
            }
        }
    }
}