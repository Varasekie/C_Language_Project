//
// Created by 86139 on 2019/11/19.
//

#ifndef C_LANGUAGE_PROJ_POWER_H
#define C_LANGUAGE_PROJ_POWER_H

#include <stdio.h>

void power() {
    int a = 1, j, m, n;
    scanf("%d %d", &n, &m);
    for (j = 1; j <= n; j++)
        a *= m;
    printf("%d", a);
}


#endif //C_LANGUAGE_PROJ_POWER_H
