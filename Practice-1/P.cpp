#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(void) { long long n; int r; if(scanf("%lld",&n)!=1) return 0; if(n==0) r=0; else {r=(int)(n%9); if(r==0) r=9;} printf("%d",r); return 0; }
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
