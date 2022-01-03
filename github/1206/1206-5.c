#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char a;
    scanf("%c",&a);
    if (islower(a))
    {
        printf("lowercase\n");
    }
    else if(isupper(a))
    {
        printf("uppercase\n");
    }
    else
    {
        printf("special character\n");
    }
}