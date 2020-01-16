#include <stdio.h>

int main() {
    int initial, final;

    printf("Enter initial of range followed by final");
    printf(" of range separated by a space:\n");
    scanf("%d %d", &initial, &final);

    while (initial <= final)
        printf("%d\n", initial++);

    return 0;
}
