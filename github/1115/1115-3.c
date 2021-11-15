#include<stdio.h>

int main(){
    int a,b,s=0;
    scanf("%d%d",&a,&b);
    int arr1[a];
    int arr2[b];
    for (int i = 0; i < a ; i++)
    {
        scanf("%d",&arr1[i]);
    }
    for (int i = 0; i < b ; i++)
    {
        scanf("%d",&arr2[i]);
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b ; j++)
        {
            if (arr2[j]==arr1[i])
            {
                for (int x = 0; x < a; x++)
                {
                    if(arr2[j]==arr1[x]){
                        arr1[x]=NULL;
                    }
                }
                s++; 
            }
        }
    }
    printf("%d",s);
}