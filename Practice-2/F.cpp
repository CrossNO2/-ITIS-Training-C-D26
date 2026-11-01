#include <stdio.h>

int main() {
    long long xT;
    long long yT;
    long long xA;
    long long yA;
    long long xB;
    long long yB;
    long long first;
    long long second;
    long long firstAbsolute;
    long long secondAbsolute;
    long long horizontal;
    long long vertical;

    scanf("%lld %lld %lld %lld %lld %lld", &xT, &yT, &xA, &yA, &xB, &yB);

    first = xA - xT;
    second = xB - xT;
    horizontal = 0;
    if (first != 0 && second != 0 && ((first < 0) == (second < 0))) {
        if (first < 0) firstAbsolute = -first; else firstAbsolute = first;
        if (second < 0) secondAbsolute = -second; else secondAbsolute = second;
        if (firstAbsolute < secondAbsolute) horizontal = firstAbsolute; else horizontal = secondAbsolute;
    }
    first = yA - yT;
    second = yB - yT;
    vertical = 0;
    if (first != 0 && second != 0 && ((first < 0) == (second < 0))) {
        if (first < 0) firstAbsolute = -first; else firstAbsolute = first;
        if (second < 0) secondAbsolute = -second; else secondAbsolute = second;
        if (firstAbsolute < secondAbsolute) vertical = firstAbsolute; else vertical = secondAbsolute;
    }
    printf("%lld\n", 1 + horizontal + vertical);

    return 0;
}
