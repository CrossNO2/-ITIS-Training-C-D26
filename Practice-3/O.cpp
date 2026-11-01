#include <stdio.h>

int main() {
    int n;
    long long k;
    long long values[1000000];
    long long maximum = 0;
    long long minimum = 0;
    scanf("%d %lld", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &values[i]);
        if (values[i] > maximum) maximum = values[i];
        if (i == 0 || values[i] < minimum) minimum = values[i];
    }
    if (k == 0) {
        for (int i = 0; i < n; i++) printf("%lld ", values[i]);
    } else if (k % 2 == 1) {
        for (int i = 0; i < n; i++) printf("%lld ", maximum - values[i]);
    } else {
        for (int i = 0; i < n; i++) printf("%lld ", values[i] - minimum);
    }
    printf("\n");
    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
