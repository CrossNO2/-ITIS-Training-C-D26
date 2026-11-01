#include <stdio.h>
#include <math.h>

int main() {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;
    printf("%.6f\n", lgamma((double)n + 1.0));
    return 0;
}
