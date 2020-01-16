#include <stdio.h>

int main() {
    int n, m, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    m = n;  // save a copy of the original

    while (n > 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    if (reverse == m)
        printf("Number is palindrome\n");
    else
        printf("Number is not palindrome\n");

    return 0;
}
