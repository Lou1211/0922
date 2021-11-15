#include<stdio.h>
#include<stdlib.h>

int main(){
    int seed;
    scanf("%d",&seed);
    srand(seed);
    int arr[6];
    int i=0,a,r;
    while (i<6)
    {
        a=rand()%42+1;
        for (int j=0; j < 6; j++)
        {
            if (a!=arr[j])
            {
                arr[i]=a;
            }  
        }
        i++;
    }
    for (int c = 0; c < 6; c++)
    {
        for (int b = 0; b < 6; b++)
        {
            if (arr[b]>arr[c])
            {
                r=arr[b];
                arr[b]=arr[c];
                arr[c]=r;
            }
        }
    }
    for (int q = 0; q < 6; q++)
    {
        if (q==0)
        {
            printf("%d",arr[q]);
        }
        else{
            printf("%5d",arr[q]);
        }
    }
}