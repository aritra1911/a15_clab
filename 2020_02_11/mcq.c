#include <stdio.h>

int main() {
    char a[10], b[10], c[10];
    char s[] = "abcdabcdab";
    int score_a = 0, score_b = 0, score_c = 0;

    printf("Response of Sudent A:\n");
    for (int i=0; i<10; i++) {
        a[i] = getchar();
	    getchar();  // capture newline
	}

    printf("\nResponse of Sudent B:\n");
    for (int i=0; i<10; i++) {
        b[i] = getchar();
        getchar();  // capture newline
    }
    
    printf("\nResponse of Sudent C:\n");
    for (int i=0; i<10; i++) {
        c[i] = getchar();
        getchar();  // capture newline
    }

    for (int i=0; i<10; i++) {
        if (a[i] == s[i]) score_a++;
        if (b[i] == s[i]) score_b++;
        if (c[i] == s[i]) score_c++;
    }

    printf("\nA scored %d\n", score_a);
    printf("B scored %d\n", score_b);
    printf("C scored %d\n", score_c);
}
