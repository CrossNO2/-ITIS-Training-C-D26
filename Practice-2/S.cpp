#include <stdio.h>
#include <math.h>

int main() {
    int a;
    int b;
    int e;
    if (scanf("%d %d", &a, &b) != 2) return 0;
    for (e = a + 1; e <= 62; e++) {
        double fractional = e * log10(2.0);
        fractional -= floor(fractional);
        if ((int)floor(pow(10.0, fractional) + 1e-12) == b) {
            printf("%d\n", e);
            return 0;
        }
    }
    printf("0\n");
    return 0;
}
