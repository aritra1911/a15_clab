#include <stdio.h>

int main() {
    int p = 1;

    printf("%d", p);

    while (p < 1e3) {
        p <<= 1;
        printf(", %d", p);
    }

    printf("\n");

    return 0;
}
