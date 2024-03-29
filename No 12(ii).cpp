#include<stdio.h>

void fibonacci(int n) {
    int first = 0, second = 1, next;
    printf("Fibonacci series using iteration:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
}

int main() {
    int n;
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}
