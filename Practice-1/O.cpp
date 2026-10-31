#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

static void print_number(double value) {
    char text[64];
    if (fabs(value) < 0.000005) value = 0.0;
    snprintf(text, sizeof(text), "%.5f", value);
    char *end = text + strlen(text) - 1;
    while (end > text && *end == '0') *end-- = '\0';
    if (end > text && *end == '.') *end = '\0';
    fputs(text, stdout);
}

int main(void) {
    double ax, ay, bx, by, cx, cy;
    if (scanf("%lf %lf %lf %lf %lf %lf", &ax, &ay, &bx, &by, &cx, &cy) != 6) return 0;
    double ab = hypot(ax - bx, ay - by);
    double bc = hypot(bx - cx, by - cy);
    double ca = hypot(cx - ax, cy - ay);
    double perimeter = ab + bc + ca;
    if (perimeter == 0.0) return 0;
    double x = (bc * ax + ca * bx + ab * cx) / perimeter;
    double y = (bc * ay + ca * by + ab * cy) / perimeter;
    print_number(x);
    putchar(' ');
    print_number(y);
    putchar('\n');
    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
