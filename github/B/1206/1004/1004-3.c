#include <stdio.h>

int main( void ){
    int input;
    printf("%s\n","�O�_���в�?(0: No, 1: Yes)");
    scanf("%d",&input);
    if(input==0){
        printf("%s\n","�O�_�w�B?(0: No, 1: Yes)");
        scanf("%d",&input);
        if(input==0){
        printf("%s\n","�O�_�~���J > 100�U?(0: No, 1: Yes)");
        scanf("%d",&input);}
        if(input==0){
            printf("%s\n","����U��");
        }else{printf("%s\n","�i�H�U��");}
    }
    else{printf("%s\n","�i�H�U��");}
}