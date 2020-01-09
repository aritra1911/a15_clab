#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter two numbers separated by space:\n");
    scanf("%d %d", &a, &b);

    if (a > b)
        c = a;
    else
        c = b;

    printf("%d is largest\n", c);

    return 0;
}
