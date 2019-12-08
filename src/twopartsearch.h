//
// Created by 86139 on 2019/11/22.
//

#ifndef C_LANGUAGE_PROJ_TWOPARTSEARCH_H
#define C_LANGUAGE_PROJ_TWOPARTSEARCH_H

#include <stdio.h>

#define N 5

int a() {
    int a[N], i, left, right, m, finish, mid;
    left = 0;
    right = N - 1;
    finish = 0;
    mid = (left + right) / 2;//防止无限的循环，使用mid可以使其在一定条件下肯定能找到//
    printf("please scan the array");
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < N - 1; i++) {
        if (!(a[i] < a[i + 1])) {
            return 0;
        }
    }
    printf("please scan the number:");
    scanf("%d", &m);
    while (finish == 0&&left<right) {
        if (m == a[mid]) {
           // printf("find the number%d", m);
            finish = 1;
            break;
        } else if (m < a[mid]) {
            right = mid - 1;
            mid=(left+right)/2;
        } else if (m > a[mid]) {
            left = mid + 1;
            mid=(left+right)/2;
        }
    }

    if (finish == 0) {
        printf("Don't find the number");}
        else printf("Find the number %d", m);

}


#endif //C_LANGUAGE_PROJ_TWOPARTSEARCH_H
