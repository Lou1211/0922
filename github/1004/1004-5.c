#include <stdio.h>

int main(void){
    int input;
    printf("%s","�~�֡G");
    scanf("%d",&input);
    if(input<=30){
        printf("%s","����");
        scanf("%d",&input);
        if(input>=1){
            printf("%s","���J");
            scanf("%d",&input);
            if (input>=1){
                if(input==1){
                    printf("%s","���ȭ�");
                    scanf("%d",&input);
                    if(input==1){
                        printf("��");
                    }
                    else if(input==2){
                        printf("��");
                    }else{printf("����");}
                }else{printf("��");}
            }else{printf("����");}
        
            
        }else{printf("����");}
    }else{printf("����");}
}