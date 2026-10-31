#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(void) {
    long long n;
    long long a;
    long long b;
    long long m;
    scanf("%lld%lld%lld%lld", &n, &a, &b, &m);
    printf("%lld\n", a + b - (n - m));
    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
