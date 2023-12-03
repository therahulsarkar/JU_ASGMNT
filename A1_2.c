/*In a banking system, there are the following denomination of notes: Rs. 10, Rs. 20. Rs. 50. Rs. 100.
Write a program that will accept an amount and find the minimum number of each note required to
pay the amount. */

#include <stdio.h>

void NoteCount(int amount) {
    int denominations[4] ={100, 50, 20, 10};
    int count[4];
    
    for(int i = 0; i<4; i++){
        count[i] = amount / denominations[i];
        amount = amount % denominations[i];
        printf("Total notes of denomination %d required is: %d \n", denominations[i], count[i]);
    }
}

int main() {
    int amount;
    printf("Enter the amount: Rs. ");
    scanf("%d", &amount);
    NoteCount(amount);

    return 0;
}