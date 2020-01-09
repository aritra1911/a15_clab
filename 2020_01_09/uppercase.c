#include <stdio.h>

int main() {
    int c;

    printf("Enter a character: ");
    c = getchar();

    // Imitate toupper()
    if (c >= 97 && c <= 122)
        c -= 32;

    if (c >= 65 && c <= 90)
        printf("%c\n", c);

    return 0;
}
