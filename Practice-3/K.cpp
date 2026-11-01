#include <stdio.h>

int main() {
    int n;
    int value;
    int used[500002] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        if (value <= n + 1) used[value] = 1;
    }
    value = 1;
    while (used[value]) value++;
    printf("%d\n", value);
    return 0;
}
