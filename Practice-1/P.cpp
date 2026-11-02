#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main() {
    long long n;
    int r;
    scanf("%lld", &n);
    r = (int)(n % 9);
    r += 9 * (n != 0 && r == 0);
    printf("%d", r);
    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
