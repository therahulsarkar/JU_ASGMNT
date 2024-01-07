#include <iostream>
#include <string>

using namespace std;


int reverseDigits(int num) {
    int reversedNum = 0;
    while (num != 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }
    return reversedNum;
}

bool isPrime(int num) {
    if (num <= 1) return false; 

   
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false; 
        }
    }
    return true;  
}

void calculate(int m, char ch) {
    if (m < 10 && m > -10) {
        cout << "Number of digits should be greater than 1." << endl;
        return;
    }

    if (ch == 'r') {
        cout << "Reversed number: " << reverseDigits(m) << endl;
    } else if (ch == 'p') {
        if (isPrime(m)) {
            cout << m << " is a prime number." << endl;
        } else {
            cout << m << " is not a prime number." << endl;
        }
    } else {
        cout << "Invalid choice! Please enter 'r' or 'p'." << endl;
    }
}

int main() {
   
    calculate(189, 'r');          
    calculate(239, 'p');                      
    

    return 0;
}