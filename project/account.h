#ifndef ACCOUNT_H
#define ACCOUNT_H

typedef struct 
{
    int account_number;
    char name[100];
    double balance;
} Account;

Account create_account(int account_number);
void deposit(Account accounts[],int count ,int account_number,double amount);
void withdraw(Account accounts[],int count ,int account_number,double amount);
void check_balance(Account accounts[],int count ,int account_number);

#endif