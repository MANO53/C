#include<stdio.h>
#include<string.h>
// int main()  ...........1
// {
//     int arr1[5]={1,2,3,4,5};
//     int arr2[5]={1,2,3,4,5};
//     int arr3[5];
//     for (int  i = 0; i < 5; i++)
//     {
//         printf("the sum of array is %d ",arr3[i]=arr2[i]+arr1[i]);
//         printf("\n");
//     }
    
// }



// int main()///...........................2
// {
//     int arr1[3]={12,13,14};
//     int arr2[3];
//     for (int  i = 0; i < 3; i++)
//     {
//         arr2[i]=arr1[i];
//     }
//     printf("the frist array : ");
//     for (int  i = 0; i < 3; i++)
//     {
//         printf("%d",arr1[i]);
//     }
//     printf("\n");
//     printf("the second array : ");
//     for (int  i = 0; i < 3; i++)
//     {
//         printf("%d",arr2[i]);
//     }
    

// }
// int main()//......................3//4
// {
    
//     int arr1[3]={22,44,55};
//     int max=arr1[0];
//     int min=arr1[0];
//     for (int i = 0; i < 3; i++)
//     {
//         if (arr1[i]>max)
//         {
//             max=arr1[i];
//         }
        
//     }
//     printf("the min is : %d\n",max);
//     for (int i = 0; i < 3; i++)
//     {
//         if (arr1[i]<min)
//         {
//             min=arr1[i];
//         }
        
//     }
//     printf("the max is : %d\n",min);
    
// }




// int main()//,...................5
// {
//     int arr1[]={10,20,30};
//     int arr2[]={5,10,15};
//     int arr3[3];
//     for (int  i = 0; i < 3; i++)
//     {
//         printf("the array 3 index (%d): %d \n",i+1,arr3[i]=arr1[i]+arr2[i]);
//     }
    
// }



// int main()//................6
// {
//     int arr1[3][3]={
//         {12,13,14},
//         {15,16,17},
//         {18,19,20}
//     };
//     printf("the array of matrix is \n");

//     for (int i = 0; i < 3; i++)
//     {
//        for (int j = 0; j < 3; j++)
//         {
//             printf("%d ",arr1[i][j]);
//         }
//         printf("\n");
//     }
    
// }




// int main()//...................................7
// {
//     int arr1[3][3]={
//         {10,20,30},
//         {40,50,60},
//         {70,80,90}
//     };
//     int arr2[3][3]={
//         {90,80,70},
//         {60,50,40},
//         {30,20,10}
//     };
//     int arr3[3][3];
//     printf("the array 3 is \n");
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ",arr3[i][j]=arr1[i][j]+arr2[i][j]);
//         }
//         printf("\n");
//     }
    
// }

// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main()
// {
//    int arr1[3][3]={
//     {12,13,14},
//     {15,16,17},
//     {18,19,20}
//    };
//    int arr2[3][3]={
//     {88,87,86},
//     {85,84,83},
//     {82,81,80}
//    };
//    int arr3[3][3];
//    for (int i = 0; i < 3; i++)
//    {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d ",arr3[i][j]=arr1[2-i][2-j]);
//         }
//         printf("\n");
//    }
   
// }   


// #include <stdio.h>
// int main() {
//     int i, space, rows, k = 0;
//     printf("enter :  ");
//     scanf("%d", &rows);
//     for (i = 1; i <= rows; ++i, k = 0) {
//         for (space = 1; space <= rows - i; ++space) {
//             printf("  ");
//         }
//         while (k != 2 * i - 1) {
//             printf("* ");
//             ++k;
//         }
//         printf("\n");
//     }
//     return 0;
// }

    

// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main()
// {
//   int n;
//   printf("enter the size :");
//   scanf("%d",&n);
//   int arr1[n];
//   int arr2[n];
//   for (int i = 0; i < n; i++)
//   {
//     printf("enter the size of index %d:",i+1);
//     scanf("%d",&arr1[i]);
//   }
//   for (int  i =n-1,x=0; i >= 0; i--,x++)
//   {
//     arr2[x]=arr1[i];
//   }
//   for (int  i = 0; i < n; i++)
//   {
//      printf("the number of index  %d   %d:",i+1,arr2[i]);
//      printf("\n");
//   }
  
  
  
// }                     

// #include<stdio.h>
//     int prime_pro(int prime)
//     {int i=2;
//         while(i<=prime/2){
//         if(prime%2==0)
//         {        
//             return 0;
//         }else{
//             prime++;}
//             return 1;
//         }
//     }
// int main()
// {
//     int prime;
//     printf("enter the number you want check :");
//     scanf("%d",&prime);
//     if (prime_pro(prime)==1)
//     {
//         printf("the number is prime");
//     }else{
//         printf("the number is not prime");
//     }
    
// }




// int n1;

// int sq(int n1)
// {
//     if (n1>0)
//     {
//        n1= n1*n1;
//     }else
//     {
//         return 0;
//     }
    
    
// }
// void print(int n1){
//     printf("the square number is : %d",n1);
// }
// int main()
// {
//     printf("enter the number: ");
//     scanf("%d",&n1);
//     int sq1=sq(n1);
//     print(sq1);
// }
// #include<stdio.h>
// int swap(int n1,int n2)
// {
//     printf("you enter the number 1:%d\n",n1);
//     printf("you enter the number 2:%d\n",n2);
//     int temp=n1;
//     n1=n2;
//     n2=temp;
//     printf(" the number 1 :%d\n",n1);
//     printf(" the number 1 :%d\n",n2);
// }
// int main()
// {
    
//     int number1,number2;
//     printf("enter the number1 :");
//     scanf("%d",&number1);
//     printf("enter the number2 :");
//     scanf("%d",&number2);
//     swap(number1,number2);
// }
// #include<stdio.h>
// int n;
// void re(int arr[], int n);
// int main()
// {
//     printf("enter the size : ");
//     scanf("%d",&n);
//    int arr1[n];
//    for (int i = 0; i < n; i++)
//    {
//         printf("enter the number %d : ",i+1);
//         scanf("%d",&arr1[i]);
//    }
//     n=sizeof(arr1)/sizeof(arr1[0]);
//     re(arr1,n);
// }
// void re(int arr[],int n)
// {
    
//     for (int  i =n-1 ; i >= 0; i--)
//     {
//         printf("%d\n",arr[i]);
//     }
    
// }
// #include<stdio.h>
// int n;
// void re(int arr[], int n);
// int main()
// {
//     printf("enter the size : ");
//     scanf("%d",&n);
//    int arr1[n];
//    for (int i = 0; i < n; i++)
//    {
//         printf("enter the number %d : ",i+1);
//         scanf("%d",&arr1[i]);
//    }
//     n=sizeof(arr1)/sizeof(arr1[0]);
//     re(arr1,n);
// }
// void re(int arr[],int n)
// {
    
//     for (int  i =n-1 ; i >= 0; i--)
//     {
//         printf("%d\n",arr[i]);
//     }
    
// }