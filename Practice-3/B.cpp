#include <stdio.h>

int main() {
    int n;
    int numbers[100000];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 != 0) {
            printf("%d ", numbers[i]);
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d ", numbers[i]);
        }
    }
    printf("\n");

    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
