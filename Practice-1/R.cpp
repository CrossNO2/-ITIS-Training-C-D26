#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(void) { long long p,m,final; if(scanf("%lld%lld",&p,&m)!=2) return 0; final=(p+m)%10; printf("%lld %d",final,(m%2==0 && final%2==0 && m/10>0)); return 0; }
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
