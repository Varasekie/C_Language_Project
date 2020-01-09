//
// Created by 86139 on 2020/1/9.
//

#ifndef C_LANGUAGE_PROJ_SWITCHSYSTEM_H
#define C_LANGUAGE_PROJ_SWITCHSYSTEM_H


#include <stdio.h>


int dtoh(int n) {
    if (n == 0) {
        return 0;
    }

    dtoh(n / 16);
    putchar(n % 16 < 10 ? n % 16+'0' : n % 16 - 10 + 'A');
}


/*
主函数调用：    int dtoh(int);
int n;
printf("n =\n");
scanf("%d", &n);
dtoh(n);
*/

#endif //C_LANGUAGE_PROJ_SWITCHSYSTEM_H
