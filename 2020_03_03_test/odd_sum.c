#include <stdio.h>
#define MAX 100

int main() {
    int a[MAX], n, c=0, s=0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("\nEnter elements:\n");
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("\nOdds:\n");
    for (int i=0; i<n; i++)
        if (a[i] & 1) {
            printf("%d\n", a[i]);
            s += a[i];
            c++;
        }


    printf("\nNumber of odds : %d\n", c);
    printf("Sum of odds : %d\n", s);

    return 0;
}
