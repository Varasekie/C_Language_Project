//
// Created by 86139 on 2019/12/23.
//

#ifndef C_LANGUAGE_PROJ_WEEKDATE_CORRECT_H
#define C_LANGUAGE_PROJ_WEEKDATE_CORRECT_H

#include <stdio.h>

void weekdate1() {
    int year, month, day;
    int leap, err;
    int totalday = 0;
    int weekday;
    printf("please scan the year month date");
    scanf("%d %d %d", &year, &month, &day);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        leap = 1;
    }
    //printf("%d",leap);
    switch (month - 1) {
        case 11:
            totalday += 31;
        case 10:
            totalday += 30;
        case 9:
            totalday += 31;
        case 8:
            totalday += 30;
        case 7:
            totalday += 31;
        case 6:
            totalday += 31;
        case 5:
            totalday += 30;
        case 4:
            totalday += 31;
        case 3:
            totalday += 30;
        case 2:
            if (leap == 1) {
                totalday += 29;
            } else totalday += 28;
        case 1:
            totalday += 30;
        case 0:
            totalday += day;
            break;
        default:
            err = 1;
            printf("scan the wrong number");
    }
    if (err == 0) {
        weekday = (totalday + 5) % 7;
        printf("%dyear %d month %d date", year, month, weekday);
    }
}

#endif //C_LANGUAGE_PROJ_WEEKDATE_CORRECT_H
