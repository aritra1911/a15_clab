#include <stdio.h>
#define MAX 100

int main() {
    int a[MAX][MAX], m, n;
    printf("Enter row size and column size separated by a space:\n");
    scanf("%d %d", &m, &n);

    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++)
            scanf("%d", &a[i][j]);

    printf("\n");

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++)
            printf(" %d ", a[i][j]);
        printf("\n");
    }
}
