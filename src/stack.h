//
// Created by 86139 on 2019/12/20.
//

#ifndef C_LANGUAGE_PROJ_STACK_H
#define C_LANGUAGE_PROJ_STACK_H


#include <stdio.h>
#define N 20

int stack(){
    struct Sta{
        int top;
        int a[N]={1,2,3,4};
    };
    struct Sta s1;
    s1.top=0;

    //减少一个数字
    s1.top--;


}
#endif //C_LANGUAGE_PROJ_STACK_H
