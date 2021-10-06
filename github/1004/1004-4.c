#include <stdio.h>

int main(void){
    int y;
    scanf("%d",&y);
    if(y%4==0){
        if(y%100==0&&y%400!=0){
            printf("%s\n%s%d%s%d%s%d\n","キ","瞒",y,"程秥琌",y+4,"",y-4);
        }else{printf("%s\n","秥");}}
    if(y%4==2){
        if((y+2)%100==0&&(y+2)%400!=0){
        printf("%s\n%s%d%s%d%s\n","キ","瞒",y,"程秥琌",y-2,"");
        }
        else if((y-2)%100==0&&(y-2)%400!=0){
            printf("%s\n%s%d%s%d%s\n","キ","瞒",y,"程秥琌",y+2,"");}
        else{
            printf("%s\n%s%d%s%d%s%d%s\n","キ","瞒",y,"程秥琌",y+2,"",y-2,"");}
        }
    if(y%4==1){
        if((y-1)%100==0&&(y-1)%400!=0){
        printf("%s\n%s%d%s%d%s\n","キ","瞒",y,"程秥琌",y+3,"");}
        else{printf("%s\n%s%d%s%d%s\n","キ","瞒",y,"程秥琌",y-1,"");}}
    if(y%4==3){
        if((y+1)%100==0&&(y+1)%400!=0){
        printf("%s\n%s%d%s%d%s\n","キ","瞒",y,"程秥琌",y-3,"");}
        else{printf("%s\n%s%d%s%d%s\n","キ","瞒",y,"程秥琌",y+1,"");}}
}