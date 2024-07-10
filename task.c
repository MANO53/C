#include<stdio.h>
int main(){
    int size ;
    printf("enter the number of array : ");
    scanf("%d",&size);
    int array1[size];
    printf("you use array of %d index \n",size);
    for (int  i = 0; i < size; i++)
    {
        printf("enter the number of index %d:  ",i+1);
        scanf("%d",&array1[i]);
    }
    for ( int i = 0 ; i < size; i++)
    {
        if (array1[i]%3==0 && array1[i]%5==0)
        {
            printf("the number divisible by 5 and 3 : %d\n",array1[i]);
        }
        
    }
}