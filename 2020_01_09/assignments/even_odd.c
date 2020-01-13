#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Number is ");
    if (n%2 == 0)
        printf("even\n");
    else
        printf("odd\n");

    return 0;
}
