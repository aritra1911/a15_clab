#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    for (int i=2; i<n; i++)
        if (n % i == 0) {
            printf("Not Prime\n");
            return 0;
        }

    if (n != 1) printf("Prime\n");

    return 0;
}
