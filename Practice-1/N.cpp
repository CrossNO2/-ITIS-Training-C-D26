#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(void) { double x,y,a,b,c; if(scanf("%lf%lf%lf%lf%lf",&x,&y,&a,&b,&c)!=5) return 0; printf("%.3f\n",fabs(a*x+b*y+c)/sqrt(a*a+b*b)); return 0; }
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
