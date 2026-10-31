#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(void) {
    unsigned long long n;
    unsigned long long r;
    scanf("%llu", &n);
    r = (unsigned long long)sqrt((long double)n);
    printf("%d", r * r == n);
    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
