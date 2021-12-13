#include<stdio.h>

int main(){
    char a;
    int d=0;
    while (scanf("%c",&a)!=EOF)
    {
        if (a!='"')
        {
            printf("%c",a);
        }
        else{
            d++;
            if (d%2==1)
            {
                printf("``");
            }
            else if(d%2==0)
            {
                printf("''");
            }
        }
    }
}