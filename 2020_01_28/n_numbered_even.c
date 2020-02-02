#include <stdio.h>

int main() {
    int n;
    printf("Enter length of array: ");
    scanf("%d", &n);

    int arr[n], l = 0;

    printf("Enter %d integers:\n", n);
    for (int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    for (int i=0; i<n; i++)
        if (arr[i] % 2 == 0)
            l++;

    int evens[l];

    for (int i=0, j=0; i<n; i++)
        if (arr[i] % 2 == 0)
            evens[j++] = arr[i];

    printf("\nEvens:\n");
    for (int i=0; i<l; i++)
        printf("%d\n", evens[i]);

    return 0;
}
