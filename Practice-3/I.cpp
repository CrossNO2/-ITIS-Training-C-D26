#include <stdio.h>

int main() {
    int n;
    int k;
    scanf("%d %d", &n, &k);
    int values[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &values[i]);
    }
    k %= n;
    for (int i = k; i < n; i++) {
        printf("%d ", values[i]);
    }
    for (int i = 0; i < k; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");
    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
