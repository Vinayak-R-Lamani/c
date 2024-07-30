#include <stdio.h>
#include <string.h>
#include "account.h"

Account create_account(int account_number)
{
    Account new_account;
    new_account.account_number = account_number;
    printf("Enter name : ");
    scanf("%s", new_account.name);
    new_account.balance = 0.0;
    printf("Account created successfully .Account Number : %d \n", new_account.account_number);
    return new_account;
}

void deposit(Account accounts[], int count, int account_number, double amount)
{
    for (int i = 0; i < count; i++)
    {
        if (accounts[i].account_number == account_number)
        {
            accounts[i].balance += amount;
            printf("Amount %.2lf deposited.New balance %.2lf\n", amount, accounts[i].balance);
            return;
        }
    }
    printf("Account not found .\n");
}

void withdraw(Account accounts[], int count, int account_number, double amount)
{
    for (int i = 0; i < count; i++)
    {
        if (accounts[i].account_number == account_number)
        {
            if (accounts[i].balance >= amount)
            {
                accounts[i].balance -= amount;
                printf("Amount %.2lf withdraw.New balance %.2lf\n", amount, accounts[i].balance);
            }
            else
            {
                printf("Insufficient balance.\n");
            }

            return;
        }
    }
    printf("Account not found .\n");
}


void check_balance(Account accounts[],int count ,int account_number){
     for(int i = 0 ; i < count ; i++){
        if (accounts[i].account_number == account_number)
        {
          printf("Account Number %d \n",accounts[i].account_number);
          printf("Name : %s \n",accounts[i].name);
          printf("Balance : %.2lf \n",accounts[i].balance);
        }
        
    }
    printf("Account not found .\n");
}
