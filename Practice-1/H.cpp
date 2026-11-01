#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main() {
    long long n;
    long long x;
    scanf("%lld", &n);
    x = 30 * n;
    printf("%lld", x * (x - 1) / 2);
    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
