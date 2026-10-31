#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(void) {
    long long a;
    long long b;
    scanf("%lld %lld", &a, &b);
    printf("%lld\n%lld\n%lld\n%.5f\n", a + b, a - b, a * b, (double)a / (double)b);
    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
