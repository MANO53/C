#include <stdio.h>
#include<string.h>
int main()
{
  int s;
  printf("hat size :");
  scanf("%d",&s);
  int arr[s][s];
  int arr1[s][s];
  for (int  i = 0; i < s; i++)
  {
    for (int  j = 0; j < s; j++)
    {
      printf("hat fe makan  elsaf %d el3mod %d ",i+1,j+1);
      scanf("%d",&arr[i][j]);
    }
    
  }
  //show to ensure : : : 
  for (int  i = 0; i < s; i++)
  {
    for (int  j = 0; j < s; j++)
    {
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  // int x;
  // for (int  i = 0; i < s; i++)
  // {
  //   for (int  j = s-1,x=0; j >= 0; x++,j--)
  //   {
  //     arr1[x][x]=arr[i][j];
  //   }
  // }
  
  for (int  i = 0; i < s; i++)
  {
    for (int  j = 0; j < s; j++)
    {
      printf("%d ",arr1[i][j]=arr[2-i][2-j]);
    }
    printf("\n");
  }

  
  return 0;
}
