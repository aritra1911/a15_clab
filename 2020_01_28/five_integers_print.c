#include <stdio.h>

int main() {
    int arr[5];

    printf("Enter 5 integer values:\n");
    for (int i=0; i<5; i++)
        scanf("%d", &arr[i]);

    printf("\n");

    for (int i=0; i<5; i++)
        printf("%d\n", arr[i]);

    return 0;
}
