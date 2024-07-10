#include<stdio.h>
int n;
int fact=1;
int fun(int min)
{
    
    for (int  i = 1; i <= min; i++)
    {
        fact*=i;
    }
    return fact;
    
}

int main()
{
    printf("enter size  : ");
    scanf("%d",&n);
    int arr1[n];
    for (int  i = 0; i < n; i++)
    {
        printf("enter  array of endex %d : ",i+1);
        scanf("%d",&arr1[i]);
    }
    int min =arr1[0];
    for (int i = 0; i < n; i++)
    {
        if (min>arr1[i])
        {
            min=arr1[i];
        }
    }
    printf("the min is : %d ",min);
    int fact1=fun(min);
    printf("the fact of %d is %d",min,fact);

    
}