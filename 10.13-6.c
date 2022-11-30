#include<stdio.h>

void reverse(double arr[],int n);
int main()
{
    double arr[5]={8.9,1.4,4.7,6.4,2.5};
    reverse(arr,5);
    for(int i=0;i<5;i++)
    {
        printf("%-5g ",arr[i]);
    }
    return 0;
}

void reverse(double arr[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        double t=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=t;
    }
    return;
}