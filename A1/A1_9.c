
#include <stdio.h>

void printPrime(int n){
    int arr[n];
    for(int i=0; i<n;i++){ arr[i] = 1; };
    for(int i=2; i<n; i++){
        if(arr[i]){
            printf("%d, ", i);
            for(int j = i * 2; j<n; j+=i){
                arr[j] = 0;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter the range");
    scanf("%d", &n);
    printf("The prime numbers are: ");
    printPrime(n);
    return 0;
}
