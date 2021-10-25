#include<stdio.h>

int A(int a){
    int s;
    if (a>1)
    {
        return A(a-1)+A(a/2);
    }
    else{
        return 2;
    }
}
int main(){
    int a;
    scanf("%d",&a);
    printf("%d\n",A(a));
}