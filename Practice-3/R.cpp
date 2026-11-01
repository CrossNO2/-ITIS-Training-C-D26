#include <stdio.h>

int main() {
    int testCases;
    int n;
    int frequency[50001] = {0};
    int value;
    scanf("%d", &testCases);
    for (int test = 0; test < testCases; test++) {
        scanf("%d", &n);
        for (int i = 0; i <= n; i++) frequency[i] = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &value);
            frequency[value]++;
        }
        long long answer = 0;
        long long smaller = 0;
        for (int i = 0; i <= n; i++) {
            answer += (long long)frequency[i] * (frequency[i] - 1) / 2 * smaller;
            answer += (long long)frequency[i] * (frequency[i] - 1) * (frequency[i] - 2) / 6;
            smaller += frequency[i];
        }
        printf("%lld\n", answer);
    }
    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
