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
        int pos = i;
        
        for (int j=i+1; j<n; j++)
            if (arr[j] < arr[pos])
                pos = j;

        if (pos != i) {
            int temp = arr[i];
            arr[i] = arr[pos];
            arr[pos] = temp;
        }
    }

    printf("\nHere goes the sorted array:\n");

    for (int i=0; i<n; i++)
        printf("%d\n", arr[i]);

    return 0;
}
