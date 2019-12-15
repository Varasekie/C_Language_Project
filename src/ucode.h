//
// Created by 86139 on 2019/12/15.
//

#ifndef C_LANGUAGE_PROJ_UCODE_H
#define C_LANGUAGE_PROJ_UCODE_H


#include <stdio.h>//leetcode pat
#define N 3
int sonarray(int a[]){
    int i,j;
    int newpoint,oldpoint;
    int b[N];
    for(i=0;i<N;i++){
        for (int j = 0; j < i; j++) {
            if(a[i]>=a[i-1]){
                b[i]=b[i-1]+1;
            } else b[i]=b[i-1];
        }
    }
    printf("%d",b[i]);
}
#endif //C_LANGUAGE_PROJ_UCODE_H
