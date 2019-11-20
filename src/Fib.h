//
// Created by 86139 on 2019/11/19.
//

#ifndef C_LANGUAGE_PROJ_FIB_H
#define C_LANGUAGE_PROJ_FIB_H

#include <stdio.h>

long fibn(int m) {
    if (m == 1 || m == 2)
        return 1;
    else
        return fib(m - 1) + fib(m - 2);
}

fib() {
    int m, r;
    printf("请输入最终数：");
    scanf("%d", &m);
    r = fibn(m);
    printf("%d", r);
}


#endif //C_LANGUAGE_PROJ_FIB_H
