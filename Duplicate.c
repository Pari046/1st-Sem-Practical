#include <stdio.h>

void removeDuplicates(int arr[], int *size) {
    int i, j, k;

    for (i = 0; i < *size; ++i) {
        for (j = i + 1; j < *size;) {
            if (arr[i] == arr[j]) {
                for (k = j; k < *size - 1; ++k) {
                    arr[k] = arr[k + 1];
                }
                --(*size);
            } else {
                ++j;
            }
        }
    }
}

void printReverse(int arr[], int size) {
    printf("Array in reverse order: ");
    for (int i = size - 1; i >= 0; --i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }
    removeDuplicates(arr, &size);
    printReverse(arr, size);

    return 0;
}
