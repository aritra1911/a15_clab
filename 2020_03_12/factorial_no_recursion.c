#include <stdio.h>

int factorial(int);

int main() {
    int x;
    printf("Enter number: ");
    scanf("%d", &x);
    printf("factorial is %d\n", factorial(x));
    return 0;
}

int factorial(int n) {
    int f;
    for (f=1; n; f*=n--);
    return f;
}
