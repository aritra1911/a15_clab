#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    int flag = (x < 0) ? 0 : 1;
    printf("%d", flag);
    return 0;
}
