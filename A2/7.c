#include <stdio.h>

int main() {
    int arr[100];
    int size, x;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the sorted array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be inserted: ");
    scanf("%d", &x);

    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] > x) {
            break;
        }
    }

    for (int j = size - 1; j >= i; j--) {
        arr[j + 1] = arr[j];
    }

    arr[i] = x;

    for (int i = 0; i < size + 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
