#include <stdio.h>
#include <stdlib.h>

int sum(int*, int);

int main() {
    int n;
    printf("Enter length of array: ");
    scanf("%d", &n);
    
    int* a = malloc(sizeof(int) * n);

    printf("Enter elements of array:\n");
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Sum : %d\n", sum(a, n));

    return 0;
}

int sum(int* a, int n) {
    int i, s;
    for (i=0, s=0; i<n; s+=a[i++]);
    return s;
}
