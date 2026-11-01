#include <stdio.h>

int isFibonacci(unsigned long long number) {
    unsigned long long first = 1;
    unsigned long long second = 1;
    while (second < number) {
        unsigned long long next = first + second;
        first = second;
        second = next;
    }
    return second == number || number == 1;
}

int main() {
    int testCases;
    unsigned long long number;
    scanf("%d", &testCases);
    for (int i = 0; i < testCases; i++) {
        scanf("%llu", &number);
        if (isFibonacci(number)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
