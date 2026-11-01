#include <stdio.h>

int main() {
    int n;
    int numbers[100000];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    if (n == 1) {
        printf("%d\n", numbers[0]);
    } else {
        printf("%d ", numbers[0]);
        for (int i = 1; i < n - 1; i++) {
            if (numbers[i] >= numbers[i - 1] && numbers[i] >= numbers[i + 1]) {
                printf("%d ", numbers[i]);
            }
        }
        printf("%d\n", numbers[n - 1]);
    }

    return 0;
}
