#include <stdio.h>

int main() {
    int n;
    int numbers[100000];
    int minimum;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    minimum = numbers[0];
    for (int i = 1; i < n; i++) {
        if (numbers[i] < minimum) {
            minimum = numbers[i];
        }
    }

    printf("%d\n", minimum);
    for (int i = 0; i < n; i++) {
        if (numbers[i] == minimum) {
            printf("%d ", i + 1);
        }
    }
    printf("\n");

    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
