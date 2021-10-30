#include<stdio.h>

int a,b,c,d,i,j,s1[100];

int fun(int c,int s1[]){
    if (c==1)
    {
        for (j = 0; j < a; j++)
        {
            for (i = 0; i < a; i++)
            {
                if(s1[j]<s1[i]){
                    d=s1[j];
                    s1[j]=s1[i];
                    s1[i]=d;
                }
            }   
        }
    }
    if (c==0)
    {
        for (j = 0; j < a; j++)
        {
            for (i = 0; i < a; i++)
            {
                if(s1[j]>s1[i]){
                    d=s1[j];
                    s1[j]=s1[i];
                    s1[i]=d;
                }
            }
            
        }
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d ",s1[i]);
    }
    puts("");
}

int main(){
    scanf("%d",&a);
    scanf("%s",&b);
    if (b=='a')
    {
        c=1;
    }
    else{
        c=0;
    }
    for (int i = 0; i <= a-1; i++)
    {
        scanf("%d",&s1[i]);
    }
    fun(c,s1);
}