#include <stdio.h>
#define MAX 100

int main() {
    int a[MAX], c[MAX], d[MAX], f[MAX], n, l=0, m=0, p=0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("\nEnter elements:\n");
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);

    for (int i=0; i<n; i++) {
        int flag = 0;
        for (int j=0; j<l; j++)
            if (a[i] == c[j]) {
                d[m++] = a[i];
                flag = 1;
                break;
            }

        if (flag) continue;
        c[l++] = a[i];
    }

    printf("\nDuplicates :\n");
    for (int i=0; i<m; i++) {
        int flag = 0;
        for (int j=0; j<p; j++)
            if (d[i] == f[j]) {
                flag = 1;
                break;
            }
        if (flag) continue;
        printf("%d\n", d[i]);
        f[p++] = d[i];
    }
}
