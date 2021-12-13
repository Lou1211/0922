#include<stdio.h>

int main(){
    int a=0,b;
    char fun[50];
    gets(fun);
    while (fun[a]!='\0')
    {
        a++;
    }
    for (int i=a-1;i>=0;i--)
    {
        printf("%c",fun[i]);
    }
    puts("");
}