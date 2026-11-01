#include <stdio.h>

int main() {
    int h;
    scanf("%d", &h);

    for (int row = 1; row <= h; ++row) {
        for (int space = 0; space < h - row; ++space) {
            putchar(' ');
        }
        for (int star = 0; star < 2 * row - 1; ++star) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}
