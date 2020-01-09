//
// Created by 86139 on 2019/12/31.
//

#ifndef C_LANGUAGE_PROJ_FIB_H
#define C_LANGUAGE_PROJ_FIB_H


#include <stdio.h>

long fibn(int m) {
    if (m == 1 || m == 2)
        return 1;
    else
        return fibn(m - 1) + fibn(m - 2);
}

void fib() {
    int m, r;
    printf("请输入最终数：");
    scanf("%d", &m);
    r = fibn(m);
    printf("%d", r);
}
#endif //C_LANGUAGE_PROJ_FIB_H
