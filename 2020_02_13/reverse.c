#include <stdio.h>
#define MAX 100

int main() {
    char str[MAX], reversed[MAX];

    printf("Enter a string: ");
    scanf("%s", str);

    int l, i;
    for (l=0; str[l] != '\0'; l++);

    for (i=0; i<l; i++)
        reversed[l - i - 1] = str[i];
    reversed[i] = '\0';

    printf("Reversed : %s\n", reversed);
}
