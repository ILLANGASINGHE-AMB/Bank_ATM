#include <stdio.h>


void deposit(float *balance);
void withdraw(float *balance);
void checkBalance(float balance);

int main() {
    float balance = 40000.0;
    int choice;

    printf("Welcome to the ABC Bank!\n");

    while (1) {

        printf("\nSelect one of the options from the following list and enter the number:\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("Your choice: ");
        scanf("%d", &choice);


        switch (choice) {
            case 1:
                deposit(&balance);
                break;
            case 2:
                withdraw(&balance);
                break;
            case 3:
                checkBalance(balance);
                break;
            default:
                printf("Invalid choice. Please select 1, 2, or 3.\n");
        }
    }

    return 0;
}



void deposit(float *balance) {
    float amount;
    printf("Enter the amount to deposit: ");
    scanf("%f", &amount);
    if (amount <= 0) {
        printf("Invalid deposit amount. Must be greater than 0.\n");
        return;
    }
    *balance += amount;
    printf("Successfully deposited. New balance: %.2f\n", *balance);
}

void withdraw(float *balance) {
    float amount;
    printf("Enter the amount to withdraw: ");
    scanf("%f", &amount);
    if (amount <= 0) {
        printf("Invalid withdrawal amount. Must be greater than 0.\n");
        return;
    }
    if (amount > *balance) {
        printf("Your balance is insufficient to withdraw that amount of money.\n");
    } else {
        *balance -= amount;
        printf("Successfully withdrawn. New balance: %.2f\n", *balance);
    }
}

void checkBalance(float balance) {
    printf("Your balance is %.2f\n", balance);
}
