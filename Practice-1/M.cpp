#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main() {
    long long n;
    long long last;
    long long tens;
    scanf("%lld", &n);
    last = n % 10;
    tens = (n / 10) % 10;
    printf("%d\n", n >= 10 && last > tens && last >= 2);
    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
