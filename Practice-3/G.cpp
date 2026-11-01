#include <stdio.h>

void sortArray(int values[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (values[i] > values[j]) {
                int temporary = values[i];
                values[i] = values[j];
                values[j] = temporary;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int values[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &values[i]);
    }
    sortArray(values, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");
    return 0;
}
