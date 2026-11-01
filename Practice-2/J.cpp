#include <stdio.h>

int main() {
    long long n, k, x;
    scanf("%lld%lld%lld", &n, &k, &x);

    const long long minimum = k * (k + 1) / 2;
    const long long maximum = k * (2 * n - k + 1) / 2;
    if (minimum <= x && x <= maximum) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
