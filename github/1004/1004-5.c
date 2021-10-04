#include <stdio.h>

int main(void){
    int input;
    printf("%s","年齡：");
    scanf("%d",&input);
    if(input<=30){
        printf("%s","長相");
        scanf("%d",&input);
        if(input>=1){
            printf("%s","收入");
            scanf("%d",&input);
            if (input>=1){
                if(input==1){
                    printf("%s","公務員");
                    scanf("%d",&input);
                    if(input==1){
                        printf("見");
                    }
                    else if(input==2){
                        printf("見");
                    }else{printf("不見");}
                }else{printf("見");}
            }else{printf("不見");}
        
            
        }else{printf("不見");}
    }else{printf("不見");}
}