#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (sum = 0; n > 0; n /= 10)
        sum += n % 10;

    printf("Sum of digits : %d\n", sum);

    return 0;
}
