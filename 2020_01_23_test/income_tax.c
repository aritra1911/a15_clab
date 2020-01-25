#include <stdio.h>

int main() {
    float ai, tax = 0;

    printf("Enter annual income in lakhs: ");
    scanf("%f", &ai);

    if (ai > 0 && ai <= 2.5)
        tax = 0;
    else if (ai > 2.5 && ai <= 5)
        tax = (ai*1e5 - 2.5e5) * 0.005;
    else if (ai > 5 && ai <= 10)
        tax = 12500 + (ai*1e5 - 5e5) * 0.1;
    else if (ai > 10)
        tax = 62500 + (ai*1e5 - 10e5) * 0.2;

    printf("Payable tax amount : Rs. %.2f\n", tax);

    return 0;
}
