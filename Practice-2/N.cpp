#include <stdio.h>

int main() {
    int t;
    int i;
    long long a;
    long long b;
    long long divisor;
    long long remainder;
    long long originalB;

    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%lld %lld", &a, &b);
        originalB = b;
        divisor = a;
        while (b != 0) {
            remainder = divisor % b;
            divisor = b;
            b = remainder;
        }
        printf("%lld %lld\n", divisor, (a / divisor) * originalB);
    }
    return 0;
}
