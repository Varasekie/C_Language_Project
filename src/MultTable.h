//
// Created by 86139 on 2019/11/19.
//

#ifndef C_LANGUAGE_PROJ_MULTTABLE_H
#define C_LANGUAGE_PROJ_MULTTABLE_H

#include <stdio.h>

void multTable() {
    int i = 1, m = 1, j;
    for (i = 1; i <= 9; i++) {
        for (m = 1; m <= i; m++) {
            j = i * m;
            printf("%dx%d=%d  ", i, m, j);
        }
        putchar('\n');
    }
}


#endif //C_LANGUAGE_PROJ_MULTTABLE_H
