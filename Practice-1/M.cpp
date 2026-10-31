#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main(void) { long long n,last,tens; if(scanf("%lld",&n)!=1) return 0; if(n<10) printf("0\n"); else {last=n%10; tens=(n/10)%10; printf("%d\n",last>tens && last>=2); } return 0; }
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
