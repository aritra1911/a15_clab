#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter two numbers seperated by space:\n");
    scanf("%d %d", &a, &b);

    printf("Less than : %d\n", a < b);
    printf("Greater than : %d\n", a > b);
    printf("Less than or equal to : %d\n", a <= b);
    printf("Greater than or equal to : %d\n", a >= b);
    printf("Equal to : %d\n", a == b);

    return 0;
}
