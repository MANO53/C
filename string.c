#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{   
    // when you use a string a copy  and swap print the lenghth of thim ;
    // char str1[12]="hello";
    // char str2[12]="world";
    // char str3[12];
    // int len ;
    // strcpy(str3,str1);
    // printf("%s\n",str3);
    // strcat(str1,str2);
    // printf("%s\n",str2);
    // len =strlen(str1);
    // printf("%d\n",len);
    
    //use char to get input or output ;
    // int c ;
    // printf("enter a value ");
    // c=getchar();
    // printf("you entered : ");
    // putchar(c);

    // use string to output and input:_
    // char str [100];
    // printf("enter the value :");
    // gets(str);
    // printf("you entered the : ");
    // puts(str);

    int i ; 
    char str[100];
    printf("enetr the value : ");
    scanf("%s %d",str,&i);
    printf("you entered  :%s %d ",str,i);

    return 0;
}