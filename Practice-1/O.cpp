#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    double ax, ay, bx, by, cx, cy;
    scanf("%lf %lf %lf %lf %lf %lf", &ax, &ay, &bx, &by, &cx, &cy);
    double ab = hypot(ax - bx, ay - by);
    double bc = hypot(bx - cx, by - cy);
    double ca = hypot(cx - ax, cy - ay);
    double perimeter = ab + bc + ca;
    double x = (bc * ax + ca * bx + ab * cx) / perimeter;
    double y = (bc * ay + ca * by + ab * cy) / perimeter;
    printf("%.5f %.5f\n", x, y);
    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
