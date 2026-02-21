#include <stdio.h>

void printPrimeNumber() {
    int n, i, found;

    for (n = 2; n <= 100; n++) {
        found = 1;   // assume n is prime

        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                found = 0;
                break;
            }
        }

        if (found == 1) {
            printf("%d\n", n);
        }
    }
}

int main() {
    printPrimeNumber();
    return 0;
}
