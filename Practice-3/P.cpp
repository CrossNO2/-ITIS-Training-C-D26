#include <stdio.h>

int main() {
    int testCases;
    int n;
    long long current;
    long long futureMaximum;
    long long profit;
    scanf("%d", &testCases);
    for (int test = 0; test < testCases; test++) {
        scanf("%d", &n);
        long long prices[n];
        for (int day = 0; day < n; day++) scanf("%lld", &prices[day]);
        futureMaximum = prices[n - 1];
        profit = 0;
        for (int day = n - 2; day >= 0; day--) {
            current = prices[day];
            if (prices[day + 1] > futureMaximum) futureMaximum = prices[day + 1];
            if (futureMaximum > current) profit += futureMaximum - current;
        }
        printf("%lld\n", profit);
    }
    return 0;
}
