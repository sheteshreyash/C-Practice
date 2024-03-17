// create a structure representing the bank account of a customer.
// what field will you use?

#include <stdio.h>

struct BankAccount
{
    char accountNumber[20];
    char accountHolderName[50];
    double balance;
};

int main()
{
    struct BankAccount myAccount;

    printf("Enter account number: ");
    scanf("%s", myAccount.accountNumber);

    printf("Enter account holder name: ");
    scanf("%s", myAccount.accountHolderName);

    printf("Enter account balance: ");
    scanf("%lf", &myAccount.balance);

    printf("\nBank Account Information:\n");
    printf("Account Number: %s\n", myAccount.accountNumber);
    printf("Account Holder Name: %s\n", myAccount.accountHolderName);
    printf("Account Balance: %.2f\n", myAccount.balance);
    return 0;
}
