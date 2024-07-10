#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{
  int a1,a2;
  float sumn,sub,div,multi;
  char v;
  int ask;
  printf(" 1.to enter : \n 2.exit :\n");
  scanf("%d",&ask);
  if (ask==1)
  printf("loding..............\n");
  while (ask)
  {

    printf("enter the number 1:");
    scanf("%d",&a1);
    printf("enter the number 2:");
    scanf("%d",&a2);
    printf("enter the operation you want to wark :");
    scanf(" %c",&v);
    switch (v)
    {
    case '+':
      printf("the sum is :%d\n",a1+a2);
      break;
    case '-':
      printf("the sub is :%d\n",a1-a2);
      break;
    case '/':
      printf("the divt is :%f\n",a1/a2);
      break;
    case '*':
      printf("the multi is :%d\n",a1*a2);
      break;
    default:
    printf("invalid number try agian");
      break;
    }
    printf(" 1.to enter : \n 2.exit :\n");
    scanf("%d",&ask);
    if (ask==1)
    printf("loding..............\n");
    else
    break;
  }
  printf("-------------------------------\n");
  printf("thank you for using calculator ");
}