#include <stdio.h>

int main() {
    long long a;
    long long b;
    long long c;
    long long maximum;
    long long minimum;

    scanf("%lld %lld %lld", &a, &b, &c);

    maximum = a;
    if (b > maximum) {
        maximum = b;
    }
    if (c > maximum) {
        maximum = c;
    }

    minimum = a;
    if (b < minimum) {
        minimum = b;
    }
    if (c < minimum) {
        minimum = c;
    }

    printf("%lld\n", maximum);
    printf("%lld\n", minimum);
    return 0;
}
