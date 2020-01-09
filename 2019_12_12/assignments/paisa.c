#include <stdio.h>

int main() {
    int paise;
    
    printf("Enter amount in paise: ");
    scanf("%d", &paise);

    printf(
        "Equivalent amount : %d Rupee(s) & %d paise\n",
        paise / 100, paise % 100
    );

    return 0;
}
