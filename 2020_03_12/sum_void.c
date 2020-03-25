#include <stdio.h>

void sum(int, int);

int main() {
    int x, y;
    printf("Enter two numbers separated by a space:\n");
    scanf("%d %d", &x, &y);
    sum(x, y);
    return 0;
}

void sum(int m, int n) {
    printf("Sum : %d\n", m + n);
}
