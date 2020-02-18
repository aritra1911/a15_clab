#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char str1[MAX], str2[MAX];

    printf("Enter a string: ");
    scanf("%s", str1);

    strcpy(str2, str1);

    printf("Copied string : %s\n", str2);

    return 0;
}
