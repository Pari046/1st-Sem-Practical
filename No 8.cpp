#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            sum += i;
        } else {
            sum -= i;
        }
    }
    printf("Sum of the first %d terms: %d\n", n, sum);

    return 0;
}
