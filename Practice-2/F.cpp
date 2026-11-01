#include <stdio.h>

long long absolute_value(long long value) {
    return value < 0 ? -value : value;
}

long long common_moves(long long first, long long second) {
    if (first == 0 || second == 0) {
        return 0;
    }
    if ((first < 0) != (second < 0)) {
        return 0;
    }
    return absolute_value(first) < absolute_value(second)
        ? absolute_value(first)
        : absolute_value(second);
}

int main() {
    long long xT;
    long long yT;
    long long xA;
    long long yA;
    long long xB;
    long long yB;

    scanf("%lld %lld %lld %lld %lld %lld", &xT, &yT, &xA, &yA, &xB, &yB);

    printf("%lld\n",
           1 + common_moves(xA - xT, xB - xT)
             + common_moves(yA - yT, yB - yT));

    return 0;
}
