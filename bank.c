#include <stdio.h>

typedef struct {
    char name[50];
    double balance;
} Account;

void deposit(Account *account, double amount) {
    account->balance += amount;
}

void withdraw(Account *account, double amount) {
    if (amount <= account->balance) {
        account->balance -= amount;
    }
}

int main() {
    Account account = {"Demo Account", 100.00};

    deposit(&account, 50.00);
    withdraw(&account, 25.00);

    printf("Account: %s\n", account.name);
    printf("Balance: %.2f\n", account.balance);

    return 0;
}
