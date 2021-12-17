#include <stdio.h>
#include <string.h>

void fun(char a[], int i)
{
    char *Prt;
    Prt = a;
    *(Prt += i);
    while (*Prt != '\0')
    {
        printf("%c", *Prt);
        *Prt++;
    }
    puts("");
    if (i == 0)
    {
        return 0;
    }
    return fun(a, i - 1);
}

int main()
{
    char a[1000] = {'\0'};
    gets(a);
    int i = strlen(a) - 1;
    fun(a, i);
}