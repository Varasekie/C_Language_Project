//
// Created by 86139 on 2019/12/8.
//

#ifndef C_LANGUAGE_PROJ_PALINDROMENUMBER_H
#define C_LANGUAGE_PROJ_PALINDROMENUMBER_H

#include <stdio.h>
#include <cmath>

void Palindromenumber() {
    int i, j, k, m, s = 0, l;
    bool P = true;
    for (i = 4; i <= 256; i++) {
        j = i * i;
        k = log10(j) + 1;//求出位数
        int a[k], b[k];
        for (m = 0; m < k; m++) {
            l = j / pow(10, (k - m));//将数字一个个放到数组中去
            a[m] = (j - l * pow(10, (k - m))) / pow(10, (k - m - 1));
        }

        for (m = 0; m < k; m++) {
            b[m] = a[k - m - 1];
        }

        for (m = 0; m < k; m++) {

            if(!(a[m] == b[m])){
                P = false;
            }

        }
        if (P == true) {
            printf("%d\t", i);
        }
        P = true;
    }
}

#endif //C_LANGUAGE_PROJ_PALINDROMENUMBER_H
