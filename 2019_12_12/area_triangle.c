// WAP to calculate the area of a triangle whose base and height are given
#include <stdio.h>

int main() {
    float base, height, area;

    printf("Enter Height of Triangle: "); scanf("%f", &height);
    printf("Enter Base of Triangle: "); scanf("%f", &base);

    area = 0.5 * height * base;

    printf("calculated Area of Triangle : %f\n", area);

    return 0;
}
