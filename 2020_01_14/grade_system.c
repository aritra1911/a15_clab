#include <stdio.h>

int main() {
    int marks;
    int index, grade;

    printf("Enter marks out of 100: ");
    scanf("%d", &marks);

    index = marks / 10;

    switch (index) {
        case 10:
        case 9:
            printf("Grade : O\n");
            break;

        case 8:
            printf("Grade : E\n");
            break;

        case 7:
            printf("Grade : A\n");
            break;

        case 6:
            printf("Grade : B\n");
            break;

        case 5:
            printf("Grade : C\n");
            break;

        case 4:
            printf("Grade : D\n");
            break;

        default:
            printf("Grade : F\n");
    }

    return 0;
}
