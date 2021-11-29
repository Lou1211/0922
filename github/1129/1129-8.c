#include<stdio.h>
#include<string.h>

int main(){
    char P[1000];
    char aa[]="1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    char as[]="34567890-=12ertyuiop[]\\qwdfghjkl;'ascvbnm,./zx";
    char AA[]="!@#$%^&*()_+qwertyuiop{}|asdfghjkl:\"zxcvbnm<>?";
    char As[]="#$%^&*()_+!@ERTYUIOP{}|QWDFGHJKL:\"ASCVBNM<>?ZX";
    while (gets(P))
    {
        for (int i = 0; i < strlen(P); i++)
        {
            for (int j = 0; j < strlen(AA); j++)
            {
                if (P[i]==as[j])
                {
                    printf("%c",aa[j]);
                }
                if (P[i]==As[j])
                {
                    printf("%c",AA[j]);
                }
            }
            if (P[i]==' ')
                {
                    printf(" ");
                }
        }
        puts("");
    }
}