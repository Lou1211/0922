#include<stdio.h>
#include<string.h>

int main(){
    char a[100];
    char B;
    char A;
    gets(a);
    scanf("%c",&B);
    scanf("%c",&A);
    scanf("%c",&A);
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i]==B)
        {
            a[i]=A;
        }
    }
    puts(a);
    puts("");
}