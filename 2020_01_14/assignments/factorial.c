#include <stdio.h>

int main() {
    unsigned long factorial = 1;
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n)
        factorial *= n--;

    printf("Factorial : %lu\n", factorial);

    return 0;
}
