#include <stdio.h>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int t;
    int i;
    long long a;
    long long b;
    long long divisor;

    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%lld %lld", &a, &b);
        divisor = gcd(a, b);
        printf("%lld %lld\n", divisor, (a / divisor) * b);
    }
    return 0;
}
