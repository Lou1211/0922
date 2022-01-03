#include<stdio.h>

int main(){
    char s1[100];
    char s2[100];
    gets(s1);
    int a=0,b=0,c=1;
    for (;s1[a]!='\0';a++)
    {
    }
    for (int i = a-1; i >=0 ; i--)
    {
        s2[b]=s1[i];
        b++;
    }
    for (int i = a-1; i >=0 ; i--)
    {
        if (s2[i]!=s1[i])
        {
            c++;
            break;
        }
        
    }
    if (c==2)
    {
        printf("No\n");
    }
    else{
        printf("Yes\n");
    }
    
}