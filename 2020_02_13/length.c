#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char str[MAX];

    printf("Enter a string: ");
    scanf("%s", str);

    int i;
    for (i=0; str[i] != '\0'; i++);

    printf("Length : %d\n", i);

    printf("Length calculated by strlen() : %ld\n", strlen(str));
}
