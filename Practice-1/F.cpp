#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(void) {
    long long a;
    long long b;
    long long h;
    long long days = 0;
    long long height = 0;
    scanf("%lld%lld%lld", &a, &b, &h);
    if (a >= h) {
        days = 1;
    } else {
        height = 0;
        while (height < h) {
            height += a;
            days++;
            if (height >= h) {
                break;
            }
            height -= b;
        }
    }
    printf("%lld", days);
    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
