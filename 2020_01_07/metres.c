#include <stdio.h>

int main() {
    int metres;

    printf("Enter quantity in metres: ");
    scanf("%d", &metres);

    printf("%d km, %d m\n", metres / 1000, metres % 1000);

    return 0;
}
