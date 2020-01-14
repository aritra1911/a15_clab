#include <stdio.h>

int main() {
    int a, b, ch;

    printf("Enter two numbers sepearated by space:\n");
    scanf("%d %d", &a, &b);

    printf("Select Menu\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

read:
    printf("Please enter an option: ");
    scanf("%d", &ch);

    if (ch == 1)
        printf("Result is %d\n", a + b);
    else if (ch == 2)
        printf("Result is %d\n", a - b);
    else if (ch == 3)
        printf("Result is %d\n", a * b);
    else if (ch == 4) {
        if (b == 0) {
            printf("Second operand of division cannot be zero\n");
            goto read;
        }
        printf("Result is %d\n", a / b);
    } else {
        printf("Invalid option\n");
        goto read;
    }

    return 0;
}
