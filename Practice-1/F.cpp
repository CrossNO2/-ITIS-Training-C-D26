#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main() {
    long long a;
    long long b;
    long long h;
    scanf("%lld%lld%lld", &a, &b, &h);
    printf("%lld", a >= h ? 1 : (h - b + a - b - 1) / (a - b));
    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
