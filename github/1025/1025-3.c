#include<stdio.h>

int A(int a,int b){
    for (;a<=b;a++)
    {
        int c=1,d=0,e=0,f=0,g=0;
        printf("%d-----\n",a);
        for (c=g;c<a;c++)
        {
            d=d+c;
            if(d>a){
                d=0;
                g=g+1;
                c=g;
                continue;
            }
            if(d==a){
                e++;
                for(f=g+1;f<=c;f++){
                    printf("%d",f);
                    if (f<c)
                    {
                        printf("+");
                    }
                }
                puts("");
            }
        }
        if(e==0){
                printf("No\n");
            }
    }
    
}

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b){
        A(b,a);
    }
    else{
        A(a,b);
    }
}