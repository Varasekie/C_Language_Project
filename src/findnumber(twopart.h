//
// Created by 86139 on 2019/12/8.
//

#ifndef C_LANGUAGE_PROJ_FINDNUMBER_TWOPART_H
#define C_LANGUAGE_PROJ_FINDNUMBER_TWOPART_H

#include <stdio.h>

#define N 5

void findnumbertwopart() {
    int a[N];
    int i, temp, j;
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    for (j = 0; j < N - 1; j++) {
        for (i = j; i < N - 1; i++) {
            if (a[i] > a[i + 1]) {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    /*for (i = 0; i < N; i++) {
        printf("%d", a[i]);
    }*/
    int left, right, b, mid;
    left = 0;
    right = N - 1;
    mid = (left + right) / 2;
    int finish = 0;
    printf("please scan the number");
    scanf("%d", &b);
    if (left < right) {
        if (b == a[mid]) {
            finish = 1;
        } else if (b < a[mid]) {
            right = mid;
            mid = (left + right) / 2;
        } else if (b > a[mid]) {
            left = mid;
            mid = (left + right) / 2;
        }
    }
    if (finish = 0) {
        printf("don't find the number");
    } else printf("find the number%d", b);
}

#endif //C_LANGUAGE_PROJ_FINDNUMBER_TWOPART_H
