#include <stdio.h>

int main() {
    int n;
    int heights[100000];
    int left = 0;
    int right;
    long long best = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &heights[i]);
    right = n - 1;
    while (left < right) {
        int height;
        if (heights[left] < heights[right]) height = heights[left]; else height = heights[right];
        long long area = (long long)(right - left) * height;
        if (area > best) best = area;
        if (heights[left] < heights[right]) left++; else right--;
    }
    printf("%lld\n", best);
    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
