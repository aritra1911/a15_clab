#include <stdio.h>

int main() {
    int p = 1;

    printf("%d", p);

    while (p <= 6e4) {
        p *= 3;
        printf(", %d", p);
    }

    printf("\n");

    return 0;
}
