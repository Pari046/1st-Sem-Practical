//Write a program that swaaps two numbers using pointers
#include <stdio.h>
void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swapNumbers(&a, &b);
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
