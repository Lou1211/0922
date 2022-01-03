#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char a[100];
    char *aPtr;
    int e;
    char p;
    scanf("%s",a);
    scanf("%d",&e);
    scanf("%c",&p);
    aPtr=strtok(a,&p);
    while (aPtr!=NULL)
    {
        printf("%s\n",aPtr);
        aPtr=strtok(NULL,&p);
    }
}