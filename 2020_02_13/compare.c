#include <stdio.h>
#define MAX 100

int main() {
    char str1[MAX], str2[MAX];

    printf("Enter a string: ");
    scanf("%s", str1);
    printf("Enter another string: ");
    scanf("%s", str2);

    int l, i, flag=0;

    // calculate length of first string
    for (l=0; str1[l] != '\0'; l++);

    // compare each element
    for (i=0; i<l; i++)
        if (str1[i] != str2[i])
            flag = 1;

    if (!flag)
        printf("Strings are same.\n");
    else
        printf("Strings are different.\n");
}
