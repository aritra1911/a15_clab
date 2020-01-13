#include <stdio.h>

int main() {
    int c;
    
    printf("Enter a character: ");
    c = getchar();

    if (c >= 65 && c <= 90)
        printf("%c\n", c + 32);
    else if (c >= 97 && c <= 122)
        printf("%c\n", c);

    return 0;
}
