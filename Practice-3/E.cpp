#include <stdio.h>

int main() {
    int n;
    int first;
    int last;
    int symmetric = 1;

    scanf("%d", &n);
    int values[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &values[i]);
    }

    first = 0;
    last = n - 1;
    while (first < last) {
        if (values[first] != values[last]) {
            symmetric = 0;
        }
        first++;
        last--;
    }

    if (symmetric) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
