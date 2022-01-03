#include <stdio.h>

int main()
{
    int a,d,sum=0;
    int t1 = 0, t2 = 0;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    int arrr[a];
    for (int i = 0; i < a; i++)
    {
        for(d=arr[i];d>0;d=d/10){
            sum+=d%10;
        }
        arrr[i]=sum;
        sum=0;
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a-1; j++)
        {
            if (arrr[j] > arrr[i])
            {
                t1 = arrr[j];
                arrr[j] = arrr[i];
                arrr[i] = t1;
                t2 = arr[j];
                arr[j] = arr[i];
                arr[i] = t2;
            }
            if (arrr[j] == arrr[i])
            {
                if (arr[j] > arr[i])
                {
                    t1 = arrr[j];
                    arrr[j] = arrr[i];
                    arrr[i] = t1;
                    t2 = arr[j];
                    arr[j] = arr[i];
                    arr[i] = t2;
                }
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
}