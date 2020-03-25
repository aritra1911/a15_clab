// WAP for binary search using RECURSION.
#include <stdio.h>
#include <stdlib.h>

int index_of(int*, int, int, int);

int main() {
    int *arr, n, elem, index;

    printf("Enter array size: ");
    scanf("%d", &n);
    
    arr = malloc(sizeof(int) * n);
    
    printf("Enter elements one by one in ascending order:\n");
    for(int i=0; i<n; i++)
        scanf("%d", arr + i);
    
    printf("Enter element to be searched: ");
    scanf("%d", &elem);
    
    if ((index = index_of(arr, 0, n-1, elem)) != -1)
        printf("Element found at index %d\n", index);
    else
        printf("Element was not found!\n");
    
    free(arr);
    
    return 0;
}

int index_of(int* a, int l, int u, int elem) {
    if (l > u) return -1;
    
    int m = (l + u) / 2;
    
    if (a[m] == elem)
        return m;
    if (a[m] < elem)
        return index_of(a, m+1, u, elem);
    return index_of(a, l, m-1, elem);
}
