//
// Created by 86139 on 2019/12/29.
//

#ifndef C_LANGUAGE_PROJ_5_7FLOORDIVISION_H
#define C_LANGUAGE_PROJ_5_7FLOORDIVISION_H


#include <stdio.h>
void floorDivision(){
    int i;
    for(i=5;i<=100;i++){
        if(i%5==0||i%7==0)
            printf("%d ",i);
    }
}
#endif //C_LANGUAGE_PROJ_5_7FLOORDIVISION_H
