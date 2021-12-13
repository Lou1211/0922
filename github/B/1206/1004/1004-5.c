#include <stdio.h>

int main(void){
    int input;
    printf("%s\n","年齡:");
    scanf("%d",&input);
    if(input<=30){
        printf("%s\n","長相 (0: 醜, 1: 帥, 2: 中等):");
        scanf("%d",&input);
        if(input>=1){
            printf("%s\n","收入 (0: 低, 1: 中, 2: 高):");
            scanf("%d",&input);
            if (input>=1){
                if(input==1){
                    printf("%s\n","是否為公務員 (0: 否, 1: 是):");
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