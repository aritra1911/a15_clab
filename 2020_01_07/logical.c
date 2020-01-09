#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter two booleans seperated by space:\n");
    scanf("%d %d", &a, &b);

    printf("Logical AND : %d\n", a && b);
    printf("Logical OR : %d\n", a || b);

    return 0;
}
