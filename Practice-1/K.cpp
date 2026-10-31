#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(void) {
    unsigned long long n;
    unsigned long long r;
    int ok = 0;
    scanf("%llu", &n);
    r = (unsigned long long)sqrt((long double)n);
    while ((r + 1) != 0 && (r + 1) <= n / (r + 1)) {
        r++;
    }
    while (r > n / r) {
        r--;
    }
    if (r * r == n) {
        ok = 1;
    }
    printf("%d", ok);
    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
