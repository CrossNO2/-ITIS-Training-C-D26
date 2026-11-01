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
    if (x >= 800) {
        score = 10;
        letter = 'A';
    } else if (x >= 700) {
        score = 9;
        letter = 'A';
    } else if (x >= 550) {
        score = 8;
        letter = 'B';
    } else if (x >= 450) {
        score = 7;
        letter = 'C';
    } else {
        score = 0;
        letter = 'X';
    }
    printf("Diem duoc quy bang so: %d\n", score);
    printf("Diem duoc quy doi bang chu: %c\n", letter);
    return 0;
}
/* Author: Bạch Ngọc Đức - Cross
From ITIS with love */
