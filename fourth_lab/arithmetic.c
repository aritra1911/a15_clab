#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter two numbers seperated by space:\n");
    scanf("%d %d", &a, &b);

    printf("Addition : %d\n", a + b);
    printf("Subtraction : %d\n", a - b);
    printf("Multiplication : %d\n", a * b);
    if (b != 0) {
        printf("Division : %d\n", a / b);
        printf("Modulus : %d\n", a % b);
    } else printf("Error: Division by zero.\n");

    return 0;
}
