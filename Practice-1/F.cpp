#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(void) { long long a,b,h,days=0,height=0; if(scanf("%lld%lld%lld",&a,&b,&h)!=3) return 0; if(a>=h) days=1; else { height=0; while(height<h){height+=a; days++; if(height>=h) break; height-=b;} } printf("%lld",days); return 0; }
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
