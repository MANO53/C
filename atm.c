#include <stdio.h>
#include <string.h>
#include<conio.h>

char Name[10];
char password[10];
char email[10];
int blance1[10];
// char acount[5][20]={
//     {'ashraf','ahmed','ebrahim','mahmoud','3sran','fawzy','angelo','walid','khaled'},//names
//     {1234,8907,2343,8909,4556,1231,3456,8765,1234},//pass
//     {1200,1333,12000,7900,12344,50000,30000,2000,98883}//blance
// };
void check_acount()
{
    char Name[10];
    char password[10];
    char email[10];
    int blance1[10];
    char acount[5][20]={
    {'ashraf','ahmed','ebrahim','mahmoud','3sran','fawzy','angelo','walid','khaled'},//names
    {1234,8907,2343,8909,4556,1231,3456,8765,1234},//pass
    {1200,1333,12000,7900,12344,50000,30000,2000,98883}//blance
};
   login();
   for (int i = 0; i < 5; i++)
   {
        for (int j = 0; j < 20; j++)
        {
             if (acount[i][j]==Name&&password&&email&&blance1)
             {
                welcome();
             }
             
        }
        
   }
   
}



void login()
{
    printf("enter your name : ");
    gets(Name);
    printf("enter your password : ");
    gets(password);
    printf("enter your email : ");
    gets(email);
    printf("enter your balance : ");
    scanf("%d",&balance1);
}
void welcome()
{
    printf("\n\t\t\t Welcome to c ATM \t\t\t\n");
    printf("\n\t\t\t made by Ashraf alsharqauy \t\t\t\n");
    printf("\n");
}


void display_info() {
    printf("Your balance: %d\n", balance1);
    printf("Your name: %s\n", Name);
    printf("your email %s\n",email);
}

void deposit() {
    int amount;
    printf("Enter the amount you want to deposit: ");
    scanf("%d", &amount);
    if (amount > 0) {
        blance1 += amount;
    } else {
        number_XX();
    }
    display_info();
}

void withdraw() {
    int amount;
    printf("Enter amount to withdraw: ");
    scanf("%d", &amount);
    if (amount > 0 && amount <= blance1) {
        blance1 -= amount;
    } else {
        number_XX();
    }
    display_info();
}

void number_XX() {
    printf("Invalid number. Please try again.\n");
}

int main() {
    int op;
    check_acount();
    printf("\n___________________________\n");
    while (1) {
        printf("1. Display info\n2. Deposit\n3. Withdraw\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &op);
        switch (op) {
            case 1:
                display_info();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                printf("Thank you for using our ATM!\n");
                return 0; // Exit the program
            default:
                printf("Invalid choice. Try again.\n");
                printf("\n________________________\n");
        }
    }
}
