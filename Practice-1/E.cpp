#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main() {
    long long a, b, c, m, n, k;

    scanf("%lld %lld %lld %lld %lld %lld", &a, &b, &c, &m, &n, &k);
    printf("%lld\n", m * a + k * b + (n - m - k) * c);

    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
