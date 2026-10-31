#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(void) {
    long long s;
    long long h;
    long long m;
    long long sec;
    scanf("%lld", &s);
    h = s / 3600;
    m = (s % 3600) / 60;
    sec = s % 60;
    printf("%lld hour %lld minute %lld second\n", h, m, sec);
    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
