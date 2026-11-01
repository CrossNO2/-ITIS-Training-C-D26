#include <stdio.h>

int main() {
    int day, month, year;
    char firstSlash, secondSlash;
    int days;
    scanf("%d%c%d%c%d", &day, &firstSlash, &month, &secondSlash, &year);

    int yesterdayDay = day - 1;
    int yesterdayMonth = month;
    int yesterdayYear = year;
    if (yesterdayDay == 0) {
        --yesterdayMonth;
        if (yesterdayMonth == 0) {
            yesterdayMonth = 12;
            --yesterdayYear;
        }
        days = 31;
        if (yesterdayMonth == 2) {
            if (yesterdayYear % 400 == 0 || (yesterdayYear % 4 == 0 && yesterdayYear % 100 != 0)) days = 29; else days = 28;
        } else if (yesterdayMonth == 4 || yesterdayMonth == 6 || yesterdayMonth == 9 || yesterdayMonth == 11) {
            days = 30;
        }
        yesterdayDay = days;
    }

    int tomorrowDay = day + 1;
    int tomorrowMonth = month;
    int tomorrowYear = year;
    days = 31;
    if (tomorrowMonth == 2) {
        if (tomorrowYear % 400 == 0 || (tomorrowYear % 4 == 0 && tomorrowYear % 100 != 0)) days = 29; else days = 28;
    } else if (tomorrowMonth == 4 || tomorrowMonth == 6 || tomorrowMonth == 9 || tomorrowMonth == 11) {
        days = 30;
    }
    if (tomorrowDay > days) {
        tomorrowDay = 1;
        ++tomorrowMonth;
        if (tomorrowMonth == 13) {
            tomorrowMonth = 1;
            ++tomorrowYear;
        }
    }

    printf("Yesterday: ");
    printf("%02d/%02d/%04d", yesterdayDay, yesterdayMonth, yesterdayYear);
    printf("\nTomorrow: ");
    printf("%02d/%02d/%04d", tomorrowDay, tomorrowMonth, tomorrowYear);
    printf(".\n");
    return 0;
}
