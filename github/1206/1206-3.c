#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char a[100];
    gets(a);
    for (int i = 0;a[i]!='\0'; i++)
    {
        if (isupper(a[i]))
        {
            a[i]=tolower(a[i]);
        }
    }
    puts(a);
    puts("");
}