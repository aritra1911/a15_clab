#include <stdio.h>

int main() {
    int arr[100], n;

    do {
        printf("Enter number of elements: ");
        scanf("%d", &n);

        if (n > 100)
            printf("Please enter a size within 100 elements.\n");
    } while (n > 100);

    printf("\nEnter elements:\n");
    for (int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (arr[j] >= arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("\nHere goes the sorted array:\n");

    for (int i=0; i<n; i++)
        printf("%d\n", arr[i]);

    return 0;
}
