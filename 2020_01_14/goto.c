#include <stdio.h>
#include <math.h>

int main()
{
    int x;

    read:
    scanf("%d", &x);
    if (x < 0) {
        printf("Square root not possible. Enter another number.\n");
        goto read;
    }

    int y = sqrt(x);
    printf("%d\n", y);
    goto read;

    return 0;
}
