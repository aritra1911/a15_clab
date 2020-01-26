#include <stdio.h>
#include <math.h>

int main() {
    int x, y, flag, k = 0;

    printf("Enter initial and final of range seprated by a space:\n");
    scanf("%d %d", &x, &y);

    printf("\n");

    for (int i = x; i <= y; i++) {
        flag = 0;  // assume it's prime
        if (i == 1)
            flag = 1;  // exception for 1 being a non-prime
        else
            for(int j = 2; j <= sqrt(i); j++)
                if (i % j == 0) {
                    flag = 1;
                    break;
                }

        if(!flag) {
            printf("%d\n", i);
            k++;
        }
    }

    printf("The number of prime numbers between %d and %d is %d\n", x, y, k);

    return 0;
}
