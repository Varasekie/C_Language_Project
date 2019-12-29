//
// Created by 86139 on 2019/12/23.
//

#ifndef C_LANGUAGE_PROJ_LEAPYEAR_H
#define C_LANGUAGE_PROJ_LEAPYEAR_H


#include <stdio.h>

void LeapYear() {
    int i = 1, a = 1, year = 1900, countprint = 0;
    while (year <= 2000) {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            for (i = 1;; i++) {
                printf("%d   ", year);
                countprint++;
                break;
            }
            if (countprint % 3 == 0)
                printf("\n");
        }
        year++;
    }
}
#endif //C_LANGUAGE_PROJ_LEAPYEAR_H
