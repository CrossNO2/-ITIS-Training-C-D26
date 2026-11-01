#include <stdio.h>

int main() {
    long long a;
    long long b;
    char op;

    scanf("%lld%c%lld", &a, &op, &b);

    if (op == '/' && b == 0) {
        printf("NO\n");
    } else if (op == '+') {
        printf("%lld + %lld = %lld\n", a, b, a + b);
    } else if (op == '-') {
        printf("%lld - %lld = %lld\n", a, b, a - b);
    } else if (op == '*') {
        printf("%lld * %lld = %lld\n", a, b, a * b);
    } else {
        printf("%lld / %lld = %.2f\n", a, b, (double)a / b);
    }

    return 0;
}
