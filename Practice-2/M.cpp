#include <stdio.h>

int isPrime(long long n) {
    long long divisor;

    if (n < 2) {
        return 0;
    }
    if (n % 2 == 0) {
        return n == 2;
    }

    for (divisor = 3; divisor * divisor <= n; divisor += 2) {
        if (n % divisor == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int t;
    int i;
    long long n;

    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%lld", &n);
        printf("%s\n", isPrime(n) ? "YES" : "NO");
    }
    return 0;
}
