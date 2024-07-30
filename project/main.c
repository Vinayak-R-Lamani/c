#include <stdio.h>
#include "account.h"

void display_menu()
{
    printf("\n*** Simple Banking System ***\n");
    printf("1. Create Account\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Check Balance\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
}

int main()
{
    Account accounts[100];
    int account_count = 0;
    int account_number;
    double amount;
    int choice;

    while (1)
    {
        display_menu();
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (account_count < 100)
            {
                accounts[account_count] = create_account(account_count + 1);
                account_count++;
            }
            else
            {
                printf("Maximum account limit reached .\n");
            }
            break;
        case 2:
            printf("Enter account number: ");
            scanf("%d", &account_number);
            printf("Enter amount to deposit: ");
            scanf("%lf", &amount);
            deposit(accounts, account_count, account_number, amount);
            break;
        case 3:
            printf("Enter account number: ");
            scanf("%d", &account_number);
            printf("Enter amount to withdraw: ");
            scanf("%lf", &amount);
            withdraw(accounts, account_count, account_number, amount);
            break;
        case 4:
            printf("Enter account number: ");
            scanf("%d", &account_number);
            check_balance(accounts, account_count, account_number);
            break;
        case 5:
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid choice. Please try again");
        }
    }
}