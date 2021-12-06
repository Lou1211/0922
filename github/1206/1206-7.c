#include <stdio.h>
#include <string.h>

int main()
{
    char a[100][100];
    int i = 0, q = 0;
    while (gets(a[i]) != NULL)
    {
        if (strlen(a[i]) > q)
        {
            q = strlen(a[i]);
        }
        i++;
    }

    for (int j = 0; j < q; j++)
    {
        for (int g = i - 1; g >= 0; g--)
        {
            if (j >= strlen(a[g]))
            {
                printf(" ");
            }
            else
            {
                printf("%c", a[g][j]);
            }
        }
        puts("");
    }
}