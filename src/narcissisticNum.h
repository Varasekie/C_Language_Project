//
// Created by 86139 on 2019/12/29.
//

#ifndef C_LANGUAGE_PROJ_NARCISSISTICNUM_H
#define C_LANGUAGE_PROJ_NARCISSISTICNUM_H

#include <stdio.h>
void narcissiticNum() {
    int i, a, b, c, sum;
    for (i = 100; i < 1000; i++) {
        a = i / 100;
        b = (i % 100) / 10;
        c = (i % 100) % 10;
        if (a * a * a + b * b * b + c * c * c == i)
            printf("%d\n", i);
    }
}
#endif //C_LANGUAGE_PROJ_NARCISSISTICNUM_H
