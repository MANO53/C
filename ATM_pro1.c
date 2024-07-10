#include <stdio.h>
#include <string.h>

struct Account {
    char name[20];
    char password[10];
    char email[30];
    int balance;
};

void check_acount(struct Account accounts[5], int size)
{
    struct Account input;
    login(&input);

    for (int i = 0; i < size; i++) {
        if (strcmp(input.name, accounts[i].name) == 0 && strcmp(input.password, accounts[i].password) == 0) {
            welcome();
            break;
        }
    }
}

void login(struct Account *account)
{
    printf("Enter your name: ");
    scanf("%s", account->name);
    printf("Enter your password: ");
    scanf("%s", account->password);
    printf("Enter your email: ");
    scanf("%s", account->email);
    printf("Enter your balance: ");
    scanf("%d", &account->balance);
}

void welcome()
{
    printf("\n\t\t\t Welcome to c ATM \t\t\t\n");
    printf("\n\t\t\t made by Ashraf alsharqauy \t\t\t\n");
    printf("\n");
}

void display_info(struct Account account)
{
    printf("Your balance: %d\n", account.balance);
    printf("Your name: %s\n", account.name);
    printf("Your email: %s\n", account.email);
}

void deposit(struct Account *account, int amount)
{
    if (amount > 0) {
        account->balance += amount;
    } else {
        printf("Invalid number. Please try again.\n");
    }
    display_info(*account);
}

void withdraw(struct Account *account, int amount)
{
    if (amount > 0 && amount <= account->balance) {
        account->balance -= amount;
    } else {
        printf("Invalid number. Please try again.\n");
    }
    display_info(*account);
}

int main()
{
    struct Account accounts[5] = {
        {"ashraf", "1234", "ashraf@example.com", 1200},
        {"ahmed", "8907", "ahmed@example.com", 1333},
        {"ebrahim", "2343", "ebrahim@example.com", 12000},
        {"mahmoud", "8909", "mahmoud@example.com", 7900},
        {"3sran", "4556", "3sran@example.com", 12344}
    };

    int op;
    check_acount(accounts, 5);
    printf("\n___________________________\n");
    while (1) {
        printf("1. Display info\n2. Deposit\n3. Withdraw\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &op);
        switch (op) {
            case 1:
                display_info(accounts[0]);
                break;
            case 2: {
                int amount;
                printf("Enter the amount you want to deposit: ");
                scanf("%d", &amount);
                deposit(accounts, amount);
                break;
            }
            case 3: {
                int amount;
                printf("Enter amount to withdraw: ");
                scanf("%d", &amount);
                withdraw(accounts, amount);
                break;
            }
            case 4:
                printf("Thank you for using our ATM!\n");
                return 0; // Exit the program
            default:
                printf("Invalid choice. Try again.\n");
                printf("\n________________________\n");
        }
    }
}