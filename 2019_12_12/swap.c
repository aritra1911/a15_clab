// WAP swap two integer variables using third variable
#include <stdio.h>

int main() {
    int a = 10, b = 20;

    printf("Value of `a' before swapping : %d\n", a);
    printf("Value of `b' before swapping : %d\n", b);

    int temp = a;
    a = b;
    b = temp;

    printf("Value of `a' after swapping : %d\n", a);
    printf("Value of `b' after swapping : %d\n", b);

    return 0;
}
