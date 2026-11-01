#include <stdio.h>

int main() {
    long long n;
    long long value;
    long long reverse = 0;
    long long sum = 0;
    int digits = 0;

    scanf("%lld", &n);
    value = n;
    while (value > 0) {
        int digit = (int)(value % 10);
        sum += digit;
        reverse = reverse * 10 + digit;
        digits++;
        value /= 10;
    }

    printf("%d\n%lld\n%lld\n", digits, sum, reverse);
    return 0;
}
