#include <stdio.h>
#define MAX 100

int main() {
    int a[MAX], n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("\n");

    for (int i=0; i<n; i++)
        printf("%d\n", a[i]);

    return 0;
}
