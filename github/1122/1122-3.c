#include <stdio.h>

int main()
{
    char a[100];
    int q, t, s=1;
    int space = 0;
    char b[52];
    int c[52];
    gets(a);
    for (int i = 0; i < 100 && a[i] != '\0'; i++)
    {
        if (a[i] == 32)
        {
            space++;
        }
        q = i;
    }
    printf("%d\n", space + 1);
    for (int i = 0; i < q + 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] > a[i])
            {
                t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }
    }
    for (int i = 0; i < q + 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] < a[i] && a[j] < 97)
            {
                t = a[j];
                a[j] = a[i];
                a[i] = t;
            }
        }
    }
    for (int i = 0; i < 100 && a[i] != '\0'; i++)
    {
        if (a[i] != a[i + 1] && a[i] != 32)
        {
            printf("%c=", a[i]);
            printf("%d\n", s);
            s = 1;
        }
        else if (a[i] != 32)
        {
            s++;
        }
    }
}