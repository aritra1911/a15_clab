#include <stdio.h>

int main() {
    int x = 1, sum = 0, n;
    scanf("%d", &n);

    while (x <= n) {
        sum += x;
        x++;
    }

    printf("%d\n", sum);

    return 0;
}
