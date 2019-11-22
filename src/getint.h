//
// Created by 86139 on 2019/11/21.
//

#ifndef C_LANGUAGE_PROJ_GETINT_H
#define C_LANGUAGE_PROJ_GETINT_H

#include <stdio.h>


void getint1(int *pintnumber) {
    int i, ch;
    bool finish = false;
    int buf[10], count = 0;
    *pintnumber = 0;
    while (!finish) {
        ch = getchar();
        switch (ch) {
            case ' ':
            case '\r':
                finish = true;
                break;
            case '\b':
                if (count > 0) {
                    printf("\b\b");
                    --count;
                }
                break;
            default:
                if ('0' <= ch && ch <= '9') {
                    printf("%c", ch);
                    buf[count] = ch;
                    count++;
                }
        }
    }
    for (int i = 0; i <= count; i++) {
        *pintnumber = 10 * (*pintnumber) + (buf[count] - '0');
    }
}
int data;
void getint(){
    getint1(&data);
    printf("%d", data);
}


#endif //C_LANGUAGE_PROJ_GETINT_H
