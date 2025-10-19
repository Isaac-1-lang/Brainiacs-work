#include <stdio.h>
int main() {
    int i, n, found;
    for (n = 2; n <= 100; n++) {
        found = 1; // Assume n is prime
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                found = 0; // Not prime
                break;
            }
        }
        if (found == 1) {
            printf("%d\n", n);
        }
    }
    return 0;
}
