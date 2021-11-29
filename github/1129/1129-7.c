#include <stdio.h>
#include<stdlib.h>

int main()
{
    char a[100], b[100];
    gets(a);
    gets(b);
    int i=0, j=0;
    while (a[i] != '\0')
    {
        i++;
    }
    while (b[j] != '\0')
    {
        j++;
    }
    for (int q = 0; q < i; q++)
    {
        int *aPrt = &a[q];
        printf("%c",*aPrt);
    }
    printf(" ");
    for (int w = 0; w < j; w++)
    {
        int *bPrt = &b[w];
        printf("%c",*bPrt);
    }
    puts("");
}