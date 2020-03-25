#include <stdio.h>

int sum();
int x, y;

int main() {
    printf("Enter two numbers separated by a space:\n");
    scanf("%d %d", &x, &y);
    printf("Sum : %d\n", sum());
    return 0;
}

int sum() {
    return x + y; 
}
