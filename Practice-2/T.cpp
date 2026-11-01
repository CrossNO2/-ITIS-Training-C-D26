#include <stdio.h>

int main() {
    unsigned long long n;
    unsigned long long value;
    int twos = 0;
    int fives = 0;
    if (scanf("%llu", &n) != 1) return 0;
    value = n;
    while (value % 2 == 0) {
        twos++;
        value /= 2;
    }
    while (value % 5 == 0) {
        fives++;
        value /= 5;
    }
    if (value != 1) printf("NO\n");
    else if (twos > fives) printf("%d\n", twos);
    else printf("%d\n", fives);
    return 0;
}
