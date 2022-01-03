#include <stdio.h>

int main(void){
    int v1,v2;
    scanf("%d%d",&v1,&v2);
    printf("%d\n",v1+v2);
    printf("%d\n",v1-v2);
    printf("%d\n",v1*v2);
    float v3=v1,v4=v2;
    printf("%.2f\n",v3/v4);
    printf("%d",v1%v2);
}