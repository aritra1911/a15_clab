#include <stdio.h>
#include <math.h>

int main() {
    int n, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 1)
        flag = 1;  // exception for 1 being a non-prime
    else
        for(int i = 2; i <= sqrt(n); i++)
            if (n % i == 0) {
                flag = 1;
                break;
            }

    if(!flag)
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);

    return 0;
}
