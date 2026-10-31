#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(void) { long long s,h,m,sec; if(scanf("%lld",&s)!=1) return 0; h=s/3600; m=(s%3600)/60; sec=s%60; printf("%lld hour %lld minute %lld second\n",h,m,sec); return 0; }
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
