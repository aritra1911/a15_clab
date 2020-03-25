#include <stdio.h>

void sum();
int x, y;

int main() {
    printf("Enter two numbers separated by a space:\n");
    scanf("%d %d", &x, &y);
    sum();
    return 0;
}

void sum() {
    printf("Sum : %d\n", x + y);
}
