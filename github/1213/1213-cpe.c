#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    int i, j;
    while (gets(a) != 0)
    {
        int b[257] = {0};
        for (i = 0; i < strlen(a); i++)
        {
            b[a[i]] = b[a[i]] + 1;
        }
        for (i = 1; i < strlen(a); i++)
        {
            for (j = 256; j >= 0; j--)
            {
                if (b[j] == i)
                {
                    printf("%d %d\n", j, i);
                }
            }
        }
        puts("");
    }
}