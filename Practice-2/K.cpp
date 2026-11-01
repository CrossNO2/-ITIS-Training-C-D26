#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int testCase = 0; testCase < t; ++testCase) {
        int m, n;
        scanf("%d%d", &m, &n);

        for (int row = 0; row < m; ++row) {
            for (int column = 0; column < n; ++column) {
                putchar('*');
            }
            putchar('\n');
        }

        if (testCase + 1 < t) {
            putchar('\n');
        }
    }

    return 0;
}
