#include <stdio.h>
#define MAX 100

int main() {
    int a[100], n, sum = 0;

    scanf("%d", &n);

    for (int i=0; i<n; scanf("%d", &a[i++]));
    
    printf("\n");

    for (int i=0; i<n; sum+=a[i++]);

    printf("Average : %d\n", sum / n);

    return 0;
}
