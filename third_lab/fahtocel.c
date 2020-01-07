// WAP to find centigrade for a given fahrenheit temperature
#include <stdio.h>

int main() {
    float f, c;
    
    printf("Enter Temperature in degree Fahrenheit: ");
    scanf("%f", &f);

    c = (f - 32) / 1.8;

    printf("Equivalent Temperature in degree Centigrade : %f\n", c);

    return 0;
}
