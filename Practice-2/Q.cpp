#include <stdio.h>
#include <math.h>

int main() {
    long long n;
    long long i;
    double result = 0.0;
    scanf("%lld", &n);
    for (i = 1; i <= n; i++) {
        result += log((double)i);
    }
    printf("%.6f\n", result);
    return 0;
}
