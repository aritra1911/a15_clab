#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char str1[MAX], str2[MAX];

    printf("Enter a string: ");
    scanf("%s", str1);

    printf("Enter another string: ");
    scanf("%s", str2);

    if (strcmp(str1, str2) == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    return 0;
}
