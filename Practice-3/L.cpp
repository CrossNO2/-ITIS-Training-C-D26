#include <stdio.h>

int main() {
    int n;
    int value;
    static int frequency[1000001] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        frequency[value]++;
    }
    for (int i = 0; i <= 1000000; i++) {
        for (int j = 0; j < frequency[i]; j++) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
