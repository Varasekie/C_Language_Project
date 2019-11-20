//
// Created by 86139 on 2019/11/19.
//

#ifndef C_LANGUAGE_PROJ_CARDUP_H
#define C_LANGUAGE_PROJ_CARDUP_H

#include <stdio.h>

void cardUp() {
    int a[52], i, j, count = 0;
    for (i = 0; i < 52; i++) {
        a[i] = 0;
    }
    for (j = 2; j <= 26; j++) {
        for (i = j; i < 52; i += j) {
            if (a[i] == 0)
                a[i] = 1;
            else a[i] = 0;
        }
    }
    for (i = 0; i < 52; i++) {
        if (a[i] == 0)
            count++;
    }
    printf("向上的牌有%d", count);
}

#endif //C_LANGUAGE_PROJ_CARDUP_H
