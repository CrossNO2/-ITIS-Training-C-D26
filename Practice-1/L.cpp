#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main() {
    long long a;
    long long b;
    long long c;
    scanf("%lld%lld%lld", &a, &b, &c);
    printf("%lld\n", b / c - (a - 1) / c);
    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
