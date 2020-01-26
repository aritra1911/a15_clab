#include <stdio.h>

int main() {
    float sum = 0;
    int f = 1;

    for(int i=1; i<=10; i++) {
        f *= i;
        sum += 1.0 / f;
    }

    printf("Sum = %f\n", sum);

    return 0;
}
