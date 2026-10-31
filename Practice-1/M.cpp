#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(void) {
    long long n;
    long long last;
    long long tens;
    scanf("%lld", &n);
    if (n < 10) {
        printf("0\n");
    } else {
        last = n % 10;
        tens = (n / 10) % 10;
        printf("%d\n", last > tens && last >= 2);
    }
    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
