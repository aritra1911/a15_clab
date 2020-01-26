#include <stdio.h>
#include <math.h>
#include <wchar.h>
#include <locale.h>

#define HEIGHT 54  // fiddle around a bit with these values
#define WIDTH 184  // to suit your needs
#define DARK 0x2591
#define LIGHT 0x2588

int main() {
    setlocale(LC_CTYPE, "");
    int flag, k=0;

    for (int i = 1; i <= HEIGHT*WIDTH; i++) {
        if (k >= WIDTH) {
            wprintf(L"\n");
            k = 0;
        }

        flag = 0;  // assume it's prime
        if (i == 1)
            flag = 1;  // exception for 1 being a non-prime
        else
            for(int j = 2; j <= sqrt(i); j++)
                if (i % j == 0) {
                    flag = 1;
                    break;
                }

        if(!flag)
            wprintf(L"%lc", LIGHT);
        else
            wprintf(L"%lc", DARK);

        k++;
    }

    wprintf(L"\n");

    return 0;
}
