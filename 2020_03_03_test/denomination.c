#include <stdio.h>

int main() {
    int n, c=0;
    int denominations[] = { 500, 100, 50, 20, 10, 1 };

    printf("Enter number: ");
    scanf("%d", &n);

    for (int i=0; i<6; i++)
        while (n >= denominations[i]) {
            c++;
            n -= denominations[i];
        }

    printf("Denominations : %d\n", c);

    return 0;
}
