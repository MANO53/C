#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int n;
    printf("hat size :");
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    for (int  i = 0; i < n; i++)
    {
        printf("hat %d\n",i+1);
        scanf("%d",&arr1[i]);
        printf("______________\n");
    }
    for (int i = n-1,x=0 ; i>=0 ; i--,x++)
    {
        arr2[x]=arr1[i];
    }
    
    for (int  i = 0; i < n; i++)
    {
        printf("the invers of array is %d\n",arr2[i]);
    }

}