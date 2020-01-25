#include <stdio.h>

int main() {
    int unit;
    float pay;

    printf("Enter unit of electricity consumed: ");
    scanf("%d", &unit);

    switch (unit / 100) {
        case 0:
            pay = unit * 3.0;
            break;

        case 1:
        case 2:
        case 3:
        case 4:
            pay = 300 + (unit - 100) * 5.0;
            break;

        default:
            pay = 2300 + (unit - 500) * 8.0;
    }

    printf("Amount payable : Rs. %.2f\n", pay);

    return 0;
}
