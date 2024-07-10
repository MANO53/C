#include<stdio.h>
int sumnum(int n1,int n2)
{
    int sum=n1+n2;
    return sum;
}
int sub(int n1,int n2)
{
    int sub=n1-n2;
    return sub;
}
float div(int n1,int n2)
{
    float div =n1/n2;
    return div;
}
int multiple(int n1,int n2)
{
    int multi=n1*n2;
    return multi;
}
int area (int  r )
{
    int circul=3.14*r*r;
    return circul;
}

int main()
{
    int your_chose;
    int proccess;
    int num1,num2;
    printf("welcome in calculater ");
    printf("enter you choose \n");
    printf("\n1==> sum\n2==>sub\n3==>div\n4==>multibly\n5==>if you want to caluclate area of circule  :");
    scanf("%d",&your_chose);
    if (your_chose==1)
    {
        printf("enter the number you want add:");
        scanf("%d  %d",&num1,&num2);
        proccess=sumnum(num1,num2);
        printf("the result of addition: %d",proccess);
    }
    else if (your_chose==2)
    {
        printf("enter the number you want to subtract :");
        scanf("%d  %d",&num1,&num2);
        proccess=sub(num1,num2);
        printf("the result of subtraction : %d",proccess);
    }
    else if (your_chose==3)
    {
        printf("enter the number you want to divition :");
        scanf("%d  %d",&num1,&num2);
        proccess=div(num1,num2);
        printf("the result of divition : %d",proccess);
    }
    else if (your_chose==4)
    {
        printf("enter the number you want to multible :");
        scanf("%d  %d",&num1,&num2);
        proccess=multiple(num1,num2);
        printf("the result of multy : %d",proccess);
    }
    else if (your_chose==5)
    {
        printf("enetr the rudis :");
        scanf("%d",&num1);
        proccess=area(num1);
        printf("the area of circul is  : %d",proccess);
    }
    

}