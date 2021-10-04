#include <stdio.h>

int main(void){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<=b&&b<=c){
        if(a+b>c&&a+c>b&&b+c>>a){
        printf("%s","true");}
        else{
        printf("%s","false");}
    }
    else{
        printf("%s","false");
    }
}