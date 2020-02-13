#include <stdio.h>
#define MAX 100

int main() {
    char str[MAX];

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i=0; str[i] != '\0'; i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;

    printf("In Lowercase : %s\n", str);
}
