#include <stdio.h>

int main() {
    int sum = 0, i = 1;
    do
        sum += i++;
    while (i <= 10);

    printf("Sum : %d\n", sum);

    return 0;
}
