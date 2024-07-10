#include<stdio.h>
#include<stdlib.h>
int main ()
{
   char grade;
   int degree;
   printf("enter you degree (number) :");
   scanf("%d",&degree);
    if (degree>=90)
   {
      char grade='A';
      printf("%c\n",grade);
      switch (grade)
  {
      case 'A':
      printf("exlant\n");
      break;

      case 'B':
      case 'c':
      printf("well done\n");
      break;

      case 'f':
      printf("Better try again\n");
      break;

      default:
      printf("inveland grade\n");
      break;
  }
   }
   else if (degree<=80)
   {
      char grade='B';
      printf("%c\n",grade);
      switch (grade)
  {
      case 'A':
      printf("exlant\n");
      break;

      case 'B':
      case 'c':
      printf("well done\n");
      break;

      case 'f':
      printf("Better try again\n");
      break;

      default:
      printf("inveland grade\n");
      break;
  }

   }else if (degree<=70)
   {
      char grade='c';
      printf("%c\n",grade);
      switch (grade)
  {
      case 'A':
      printf("exlant\n");
      break;

      case 'B':
      case 'c':
      printf("well done\n");
      break;

      case 'f':
      printf("Better try again\n");
      break;

      default:
      printf("inveland grade\n");
      break;
  }
   }
   else if (degree<=50)
   {
      char grade='f';
      printf("%c\n",grade);
      
      switch (grade)
  {
      case 'A':
      printf("exlant\n");
      break;

      case 'B':
      case 'c':
      printf("well done\n");
      break;

      case 'f':
      printf("Better try again\n");
      break;

      default:
      printf("inveland grade\n");
      break;
  }
   }
   
  
  
   
   return 0;
}