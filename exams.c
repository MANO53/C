#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{
  int num;
  printf("hat size :");
  scanf("%d",&num);
  int arr1[num];
  int arr2[num];
  int arr3[num];//sum
  int arr4[num];//invers
  
  
  for (int  i = 0; i < num; i++)
  {
    printf("enter (array1) the value of index %d :",i+1);
    scanf("%d",&arr1[i]);
  }


  for (int  i = 0; i < num; i++)
  {
    printf("enter (array2) the value of index %d :",i+1);
    scanf("%d",&arr2[i]);
  }


  for (int  i = 0; i <num; i++)
  {
    printf("the sum of two array :%d\n",arr3[i]=arr1[i]+arr2[i]);
    printf(".................................\n");
  }

  printf("_____________________________________\n");



  for (int  i = num-1, x=0;i >=0; i--,x++)
  {
    printf("the invers of array4 index:(%d):is %d\n",i+1,arr4[x]=arr3[i]);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  }
  printf("_____________________________________\n");
  
  
}