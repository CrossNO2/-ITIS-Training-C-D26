#include <stdio.h>

void sortValues(long long values[], int left, int right) {
    int i = left;
    int j = right;
    long long pivot = values[(left + right) / 2];
    while (i <= j) {
        while (values[i] < pivot) i++;
        while (values[j] > pivot) j--;
        if (i <= j) {
            long long temporary = values[i];
            values[i] = values[j];
            values[j] = temporary;
            i++;
            j--;
        }
    }
    if (left < j) sortValues(values, left, j);
    if (i < right) sortValues(values, i, right);
}

int main() {
    int testCases;
    int n;
    long long values[50000];
    scanf("%d", &testCases);
    for (int test = 0; test < testCases; test++) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++) scanf("%lld", &values[i]);
        sortValues(values, 0, n - 1);
        long long answer = 0;
        for (int i = 0; i < n - 2; i++) {
            int right = i + 2;
            for (int left = i + 1; left < n - 1; left++) {
                if (right <= left) right = left + 1;
                while (right < n && values[i] + values[left] > values[right]) right++;
                answer += right - left - 1;
            }
        }
        printf("%lld\n", answer);
    }
    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
