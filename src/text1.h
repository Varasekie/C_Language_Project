//
// Created by 86139 on 2019/12/20.
//

#ifndef C_LANGUAGE_PROJ_TEXT1_H
#define C_LANGUAGE_PROJ_TEXT1_H


#define N 4

#include <stdio.h>
int a[N]={1,2,3,4};
int text1(){
    int i;
    for(i=0;i<N;i++){
        printf("%d",a[i]);
    }
}
#endif //C_LANGUAGE_PROJ_TEXT1_H
