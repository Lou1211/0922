#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);
    int *aPrt = &a;
    for (int i = 0; i <= 25; i++)
    {
        printf("%c\t", *aPrt + i);
    }
}