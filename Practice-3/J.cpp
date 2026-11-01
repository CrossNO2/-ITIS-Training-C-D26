#include <stdio.h>

int main() {
    int n;
    int values[100001] = {0};
    int numbers[100000];
    int number;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &number);
        numbers[i] = number;
        values[number]++;
    }
    for (int i = 0; i < n; i++) {
        number = numbers[i];
        if (values[number] > 0) {
            printf("So %d xuat hien %d lan\n", number, values[number]);
            values[number] = 0;
        }
    }
    return 0;
}
