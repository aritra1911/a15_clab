#include <stdio.h>

int main() {
    int a[10][10], m, n, largest, second_largest;

    do {
        printf("Enter number of rows and columns separated by a space:\n");
        scanf("%d %d", &m, &n);
        if (m > 10 || n > 10)
            printf("Please enter a dimension within 10x10.\n");
    } while (m > 10 || n > 10);

    printf("\nEnter elements:\n");
    for (int i=0; i<m; i++) {
        printf("Row %d\n", i);
        for (int j=0; j<n; j++) {
            printf("Column %d: ", j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    // Initialize both to the first element
    second_largest = largest = a[0][0];

    // Now search for them
    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++)
            if (a[i][j] > largest) {
                second_largest = largest;
                largest = a[i][j];
            }

    printf("The largest element is %d\n", largest);
    if (second_largest != largest)
        printf("The second largest element is %d\n", second_largest);

    return 0;
}
