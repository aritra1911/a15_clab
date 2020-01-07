#include <stdio.h>
#define PI 3.1415926535897932384626

int main() {
    int radius = 99;

    float area = PI * radius * radius;
    float circumference = 2 * PI * radius;

    printf(
            "Circle Radius = %d, Area = %f, Perimeter = %f\n",
            radius, area, circumference
    );

    return 0;
}
