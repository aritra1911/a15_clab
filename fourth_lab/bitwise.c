#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter two numbers seperated by space:\n");
    scanf("%d %d", &a, &b);

    printf("Bitwise AND : %d\n", a & b);
    printf("Bitwise OR : %d\n", a | b);
    printf("Bitwise XOR : %d\n", a^b);
    printf("Bitwise Left Shift : %d\n", a << b);
    printf("Bitwise Right Shift : %d\n", a >> b);

    return 0;
}
