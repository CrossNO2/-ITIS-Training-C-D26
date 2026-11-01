#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main() {
    int x;
    int score;
    char letter;
    scanf("%d", &x);
    score = x >= 800 ? 10 : x >= 700 ? 9 : x >= 550 ? 8 : x >= 450 ? 7 : 0;
    letter = x >= 800 ? 'A' : x >= 700 ? 'A' : x >= 550 ? 'B' : x >= 450 ? 'C' : 'X';
    printf("Diem duoc quy bang so: %d\n", score);
    printf("Diem duoc quy doi bang chu: %c\n", letter);
    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
