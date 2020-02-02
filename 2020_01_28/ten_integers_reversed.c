#include <stdio.h>

int main() {
    int arr[10];

    printf("Enter 10 integers:\n");
    for (int i=0; i<10; i++)
        scanf("%d", &arr[i]);

    printf("\nIn reverse:\n");
    for (int i=9; i>=0; i--)
        printf("%d\n", arr[i]);

    return 0;
}
