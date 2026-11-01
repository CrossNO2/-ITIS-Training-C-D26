#include <stdio.h>

int main() {
    int n;
    int queries;
    int left;
    int right;
    long long prefix[1000001];
    scanf("%d %d", &n, &queries);
    prefix[0] = 0;
    for (int i = 1; i <= n; i++) {
        long long value;
        scanf("%lld", &value);
        prefix[i] = prefix[i - 1] + value;
    }
    for (int i = 0; i < queries; i++) {
        scanf("%d %d", &left, &right);
        printf("%lld\n", prefix[right] - prefix[left - 1]);
    }
    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
