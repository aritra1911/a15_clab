#include <stdio.h>

int main() {
    unsigned long factorial = 1;
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
        factorial *= n--;

    printf("Factorial : %lu\n", factorial);

    return 0;
}
