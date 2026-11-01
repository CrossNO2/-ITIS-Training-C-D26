#include <stdio.h>

int main() {
    long long n;
    long long d;
    scanf("%lld", &n);
    if (n % 2 == 0) {
        printf("%lld\n", n / 2);
        return 0;
    }
    for (d = 3; d * d <= n; d += 2) {
        if (n % d == 0) {
            printf("%lld\n", n / d);
            return 0;
        }
    }
    printf("1\n");
    return 0;
}
