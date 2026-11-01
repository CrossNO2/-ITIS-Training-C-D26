#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main() {
    double x;
    double y;
    double a;
    double b;
    double c;
    scanf("%lf%lf%lf%lf%lf", &x, &y, &a, &b, &c);
    printf("%.3f\n", fabs(a * x + b * y + c) / sqrt(a * a + b * b));
    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
