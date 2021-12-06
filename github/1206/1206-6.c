#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char a[100];
    gets(a);
    int i=0;
    while (a[i]!='\0')
    {
        if (islower(a[i]))
        {
            a[i]=toupper(a[i]);
        }
        else if (isupper(a[i]))
        {
            a[i]=tolower(a[i]);
        }
        i++;
    }
    puts(a);
    puts("");
}