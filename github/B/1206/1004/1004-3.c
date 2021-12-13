#include <stdio.h>

int main( void ){
    int input;
    printf("%s\n","是否有房產?(0: No, 1: Yes)");
    scanf("%d",&input);
    if(input==0){
        printf("%s\n","是否已婚?(0: No, 1: Yes)");
        scanf("%d",&input);
        if(input==0){
        printf("%s\n","是否年收入 > 100萬?(0: No, 1: Yes)");
        scanf("%d",&input);}
        if(input==0){
            printf("%s\n","不能貸款");
        }else{printf("%s\n","可以貸款");}
    }
    else{printf("%s\n","可以貸款");}
}