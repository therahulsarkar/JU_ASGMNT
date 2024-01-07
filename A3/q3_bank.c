#include <stdio.h>

struct Customer {
    int accountNumber;
    char name[50];
    float balance;
};

void printAccountsBelowthousand(struct Customer customers[], int numCustomers) {
    printf("Customers with balance below Rs 1000:\n");
    for (int i = 0; i < numCustomers; ++i) {
        if (customers[i].balance < 1000) {
            printf("Account Number: %d, Name: %s\n", customers[i].accountNumber, customers[i].name);
        }
    }
}

void depositAmount(struct Customer customers[], int numCustomers, int accountNumber, float amount) {
    for (int i = 0; i < numCustomers; ++i) {
        if (customers[i].accountNumber == accountNumber) {
            customers[i].balance += amount;
            printf("\nDeposit successful. Updated balance: is  Rs. %.3f\n", customers[i].balance);
            return;
        }
    }
    printf("Account not found.\n");
}

void withdrawAmount(struct Customer customers[], int numCustomers, int accountNumber, float amount) {
    for (int i = 0; i < numCustomers; ++i) {
        if (customers[i].accountNumber == accountNumber) {
            if (amount > customers[i].balance) {
                printf("\nThe balance is insufficient for  withdrawal.\n");
            } else {
                customers[i].balance -= amount;
                printf("\nWithdrawal successful. Updated balance is Rs. %.2f\n", customers[i].balance);
            }
            return;
        }
    }
    printf("Account not found.\n");
}


void printAllBalances(struct Customer customers[], int totalCustomers) {
    printf("All Balances:\n");
    for (int i = 0; i < totalCustomers; ++i) {
        printf("\nAccount Number: %d, Name: %s, Balance: Rs. %.2f\n", customers[i].accountNumber, customers[i].name, customers[i].balance);
    }
}

int main() {
    int totalCustomers;
    printf("Enter the total number of customers\n");
    scanf("%d", &totalCustomers);

    struct Customer customers[totalCustomers];

    for (int i = 0; i < totalCustomers; ++i) {
        printf("\n\nEnter details for customer %d:\n", i + 1);
        printf("Acc Number: ");
        scanf("%d", &customers[i].accountNumber);
        printf("Name : ");
        scanf("%s", customers[i].name);
        printf("Balance: ");
        scanf("%f", &customers[i].balance);
    }


    printAccountsBelowthousand(customers, totalCustomers);

    char keyword[10];
    while (1) {
        printf("Enter 'x' to quit or continue with account number, amount, and transaction code (1 for deposit, 0 for withdrawal): ");
        scanf("%s", keyword);

        if (strcmp(keyword, "x") == 0) {
            break;
        }

        int accountNumber;
        float amount;
        int code;

        sscanf(keyword, "%d", &accountNumber);
        scanf("%f %d", &amount, &code);

        if (code == 1) {
            depositAmount(customers, totalCustomers, accountNumber, amount);
        } else if (code == 0) {
            withdrawAmount(customers, totalCustomers, accountNumber, amount);
        } else {
            printf("Invalid transaction code.\n");
        }

        printAllBalances(customers, totalCustomers);
    }

    return 0;
}
