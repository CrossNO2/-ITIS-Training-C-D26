#include <stdio.h>

int main() {
    unsigned long long n;
    unsigned long long p;
    int first = 1;
    if (scanf("%llu", &n) != 1) return 0;
    for (p = 2; p <= n / p; p += 2) {
        int exponent = 0;
        while (n % p == 0) {
            n /= p;
            exponent++;
        }
        if (p == 2) {
            p = 1;
        }
        if (exponent > 0) {
            if (!first) printf(" * ");
            printf("%llu^%d", p, exponent);
            first = 0;
        }
    }
    if (n > 1) {
        if (!first) printf(" * ");
        printf("%llu^1", n);
    }
    printf("\n");
    return 0;
}
