#include <stdio.h>

int main() {
    int n, sum = 1, flag = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 1)
        flag = 0;
    else
        for(int i = 2; i < n; i++)
            if (n % i == 0)
                sum += i;

    if(n == sum && flag)
        printf("%d is a perfect number\n", n);
    else
        printf("%d is not a perfect number\n", n);

    return 0;
}
