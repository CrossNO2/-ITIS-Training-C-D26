#include <stdio.h>

int main() {
    long long a;
    long long b;
    long long remaining;
    long long extra;

    scanf("%lld %lld", &a, &b);
    remaining = a - 1;
    extra = 0;
    while (remaining >= b - 1) {
        remaining -= b - 1;
        extra++;
    }
    printf("%lld\n", a + extra);
    return 0;
}
