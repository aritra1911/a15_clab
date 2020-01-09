#include <stdio.h>

int main() {
    int c;

    printf("Enter a character: ");
    c = getchar();

    // Imitate toupper()
    if (c >= 97 && c <= 122)
        c -= 32;

    if (c >= 'A' && c <= 'Z')
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            printf("Vowel\n");
        else
            printf("Consonant\n");
    
    return 0;
}
