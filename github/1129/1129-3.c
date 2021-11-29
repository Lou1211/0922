#include <stdio.h>

int main()
{
    char a[100];
    int i = 0;
    gets(a);
    while (a[i] != '\0')
    {
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        int *Prta = &a[j];
        printf("%c", *Prta);
    }
}