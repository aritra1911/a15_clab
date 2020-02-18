#include <stdio.h>
#define MAX 100

int main() {
    char str1[MAX], str2[MAX];

    printf("Enter a string: ");
    scanf("%s", str1);
    printf("Enter another string: ");
    scanf("%s", str2);

    int i, flag=0;

    // compare each element
    for (i=0; str1[i] != '\0' || str2[i] != '\0'; i++)
        if (str1[i] != str2[i]) {
            flag = 1;
            break;
        }

    if (!flag)
        printf("Strings are same.\n");
    else
        printf("Strings are different.\n");
}
