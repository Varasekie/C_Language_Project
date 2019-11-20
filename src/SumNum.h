//
// Created by 86139 on 2019/11/19.
//

#ifndef C_LANGUAGE_PROJ_SUMNUM_H
#define C_LANGUAGE_PROJ_SUMNUM_H

#include <stdio.h>

long sum(int n) {
    int i = 1, sum = 0;
    for (i = 1; i <= n; i++)
        sum = sum + i;
    return sum;
}

void sumNum() {
    int n;
    printf("ÇëÊäÈë×îÖÕÊý×Ö£º");
    scanf("%d", &n);
    printf("%d", sum(n));
}

#endif //C_LANGUAGE_PROJ_SUMNUM_H
