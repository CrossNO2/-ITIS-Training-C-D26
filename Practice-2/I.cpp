#include <stdio.h>

int isLeapYear(int year) {
    return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
}

int daysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    }
    return (month == 4 || month == 6 || month == 9 || month == 11) ? 30 : 31;
}

void printDate(int day, int month, int year) {
    printf("%02d/%02d/%04d", day, month, year);
}

int main() {
    int day, month, year;
    char firstSlash, secondSlash;
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
        yesterdayDay = daysInMonth(yesterdayMonth, yesterdayYear);
    }

    int tomorrowDay = day + 1;
    int tomorrowMonth = month;
    int tomorrowYear = year;
    if (tomorrowDay > daysInMonth(tomorrowMonth, tomorrowYear)) {
        tomorrowDay = 1;
        ++tomorrowMonth;
        if (tomorrowMonth == 13) {
            tomorrowMonth = 1;
            ++tomorrowYear;
        }
    }

    printf("Yesterday: ");
    printDate(yesterdayDay, yesterdayMonth, yesterdayYear);
    printf("\nTomorrow: ");
    printDate(tomorrowDay, tomorrowMonth, tomorrowYear);
    printf(".\n");
    return 0;
}
