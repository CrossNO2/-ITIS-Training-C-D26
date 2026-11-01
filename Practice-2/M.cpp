#include <stdio.h>

int main() {
    int t;
    int i;
    long long n;
    long long divisor;
    int prime;

    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%lld", &n);
        prime = 1;
        if (n < 2) {
            prime = 0;
        } else if (n % 2 == 0) {
            prime = n == 2;
        } else {
            for (divisor = 3; divisor * divisor <= n; divisor += 2) {
                if (n % divisor == 0) {
                    prime = 0;
                    break;
                }
            }
        }
        if (prime) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
