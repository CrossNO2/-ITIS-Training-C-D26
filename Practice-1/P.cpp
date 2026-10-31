#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(void) {
    long long n;
    int r;
    scanf("%lld", &n);
    r = n == 0 ? 0 : (n % 9 == 0 ? 9 : (int)(n % 9));
    printf("%d", r);
    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
