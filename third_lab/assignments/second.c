#include <stdio.h>

int main() {
    int hours, minutes, seconds;

    printf("Enter number of seconds: ");
    scanf("%d", &seconds);

    // calculate hours
    hours = seconds / 3600;
    seconds %= 3600;  // remaining seconds

    // calculate minutes
    minutes = seconds / 60;
    seconds %= 60;  // remaining seconds

    printf(
        "Equivalent : %d Hour(s), %d Minute(s), and %d Second(s)\n",
        hours, minutes, seconds
    );

    return 0;
}
