#include <stdio.h>

int main() {
    int n;
    unsigned long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    do
        fact *= n--;
    while (n > 0);

    printf("Factorial : %lu\n", fact);

    return 0;
}
