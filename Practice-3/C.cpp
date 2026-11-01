#include <stdio.h>

int main() {
    int n;
    int currentMoney;
    int previousMoney;
    int currentLength = 1;
    int longestLength = 1;

    scanf("%d", &n);
    scanf("%d", &previousMoney);

    for (int i = 1; i < n; i++) {
        scanf("%d", &currentMoney);
        if (currentMoney >= previousMoney) {
            currentLength++;
        } else {
            currentLength = 1;
        }
        if (currentLength > longestLength) {
            longestLength = currentLength;
        }
        previousMoney = currentMoney;
    }

    printf("%d\n", longestLength);

    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
