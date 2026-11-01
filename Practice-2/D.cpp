#include <stdio.h>

int main() {
    long long n;
    long long k;

    scanf("%lld %lld", &n, &k);

    if (k % 2 == 1 || n % 2 == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
