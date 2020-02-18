#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char str1[MAX], str2[MAX];

    printf("Enter a string: ");
    scanf("%s", str1);
    printf("Enter another string: ");
    scanf("%s", str2);

    strcat(str1, str2);

    printf("Concatenated string : %s\n", str1);

    return 0;
}
