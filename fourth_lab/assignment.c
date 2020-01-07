#include <stdio.h>

int main() {
    int a, b, temp;
    
    printf("Enter two numbers seperated by space:\n");
    scanf("%d %d", &a, &b);

    temp = a;

    a += b;
    printf("a += b : %d\n", a);
    a = temp;

    a -= b;
    printf("a -= b : %d\n", a);
    a = temp;

    a *= b;
    printf("a *= b : %d\n", a);
    a = temp;

    a /= b;
    printf("a /= b : %d\n", a);

    return 0;
}
