#include<stdio.h>
int main()
{
    int number1,number2,number3;
    printf("enter the number1 ");
    scanf("%d",&number1);
    printf("enter the number2 ");
    scanf("%d",&number2);
    printf("enter the number3 ");
    scanf("%d",&number3);
    if (number1>0 && number2 >0 && number3>0)
    if (number1==number2 && number1 == number3)
    {
        printf(" the triangle is motsawy el adla3 ");
    }else if (number1==number2 )
    {
        printf("the triangle is metsawy el saqen");
    }else if ( number1==number3)
    {
        printf("the triangle is metsawy el saqen");
    }else if (number2==number1)
    {
        printf("the triangle is metsawy el saqen");
    }else if (number2==number3)
    {
        printf("the triangle is metsawy el saqen");
    }
    else if (number3==number1)
    {
        printf("the triangle is metsawy el saqen");
    }
    else if (number3==number2)
    {
        printf("the triangle is metsawy el saqen");
    }
    else{
        printf("mokhtalef el adla3");
    }
}