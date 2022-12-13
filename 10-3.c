#include<stdio.h>

int findMax(int arr[],int n);

int main()
{
    int arr[5] = {1, 3, 4, 5, 7};
    int max=findMax(arr,5);
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

int findMax(int arr[],int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

