#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10], m, n, p, q;

    printf("Matrix 1\n");
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

    printf("\n\nMatrix 2\n");
    do {
        printf("Enter number of rows and columns separated by a space:\n");
        scanf("%d %d", &p, &q);
        if (p > 10 || q > 10)
            printf("Please enter a dimension within 10x10.\n");
    } while (p > 10 || q > 10);

    printf("\nEnter elements:\n");
    for (int i=0; i<p; i++) {
        printf("Row %d\n", i);
        for (int j=0; j<q; j++) {
            printf("Column %d: ", j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    if (n != p) {
        printf("Multiplication not possible.\n");
        return 0;
    }

    for (int i=0; i<m; i++)
        for (int j=0; j<q; j++) {
            c[i][j] = 0;
            for (int k=0; k<n; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    
    for (int i=0; i<m; i++) {
        for (int j=0; j<q; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    return 0;
}
