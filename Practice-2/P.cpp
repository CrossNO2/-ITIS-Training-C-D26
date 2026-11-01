#include <stdio.h>

int main() {
    long long a;
    long long b;

    scanf("%lld %lld", &a, &b);
    printf("%lld\n", a + (a - 1) / (b - 1));
    return 0;
}
