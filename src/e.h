//
// Created by 86139 on 2019/12/29.
//

#ifndef C_LANGUAGE_PROJ_E_H
#define C_LANGUAGE_PROJ_E_H

#include <stdio.h>

void e() {
    int i = 1, s = 1;
    float m = 1, n = 1;
    while (m > 1e-6) {
        s *= i;
        m = 1 / (float) s;
        n += m;
        i++;
    }
    printf("e=%f", n);
}

#endif //C_LANGUAGE_PROJ_E_H
