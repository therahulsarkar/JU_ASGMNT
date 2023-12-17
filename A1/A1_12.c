#include <stdio.h>

void mergeArrays(int arr1[], int m, int arr2[], int n, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            result[k++] = arr1[i++];
        else if (arr2[j] < arr1[i])
            result[k++] = arr2[j++];
        else {
            result[k++] = arr1[i++];
            j++;
        }
    }

    while (i < m)
        result[k++] = arr1[i++];

    while (j < n)
        result[k++] = arr2[j++];
}

int main() {
    int m, n;

    printf("Enter the size of the first array: ");
    scanf("%d", &m);

    int arr1[m];
    printf("Enter elements of the first array ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n);

    int arr2[n];
    printf("Enter elements of the second array ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int result[m + n]; 

    mergeArrays(arr1, m, arr2, n, result);

    printf("Union of the arrays in sorted order: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
