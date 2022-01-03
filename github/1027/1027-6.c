#include<stdio.h>

int main(){
    char s1[200];
    int s2[200],s3[200],total[100];
    int a,b,c,d,e;
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
        scanf("%c%d%d",&s1[i],&s2[i],&s3[i]);
    }
    for (int i = 0; i < a; i++)
    {
        if(s1[i]=='S'){
            total[i]=400;
        }
        if(s1[i]=='H'){
            total[i]=300;
        }
        if(s1[i]=='D'){
            total[i]=200;
        }
        if(s1[i]=='C'){
            total[i]=100;
        }
    }
    for (int i = 0; i < a; i++)
    {
        total[i]=total[i]+s2[i]*10+s3[i];
    }
    for (int j = 0; j < a; j++)
        {
            for (int i = 0; i < a; i++)
            {
                if(total[j]<total[i]){
                    b=total[j];
                    total[j]=total[i];
                    total[i]=b;
                }
            }   
        }
}