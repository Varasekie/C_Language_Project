//
// Created by 86139 on 2019/12/23.
//

#ifndef C_LANGUAGE_PROJ_MAX_H
#define C_LANGUAGE_PROJ_MAX_H
#include<stdio.h>

int max() {
    int a, b, c, max;
    printf("please input a,b,c:\n");
    scanf("%d%d%d", &a, &b, &c);
    max = a;
    if (max < b)
        max = b;
    else if (max < c)
        max = c;
    printf("The largest number is%d\n", max);
    return 0;
}
#endif //C_LANGUAGE_PROJ_MAX_H
