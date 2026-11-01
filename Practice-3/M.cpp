#include <stdio.h>

int main() {
    int n;
    int value;
    long long pairs = 0;
    static long long frequency[1000001] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        pairs += frequency[value];
        frequency[value]++;
    }
    printf("%lld\n", pairs);
    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
