#include <stdio.h>

int main(void){
    int input;
    printf("%s\n","�~��:");
    scanf("%d",&input);
    if(input<=30){
        printf("%s\n","���� (0: ��, 1: ��, 2: ����):");
        scanf("%d",&input);
        if(input>=1){
            printf("%s\n","���J (0: �C, 1: ��, 2: ��):");
            scanf("%d",&input);
            if (input>=1){
                if(input==1){
                    printf("%s\n","�O�_�����ȭ� (0: �_, 1: �O):");
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