#include <stdio.h>
#include <math.h>

int main() {
    long long n;
    scanf("%lld", &n);
    printf("%.6f\n", lgamma((double)n + 1.0));
    return 0;
}
