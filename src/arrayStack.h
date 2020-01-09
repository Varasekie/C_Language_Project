//
// Created by 86139 on 2019/12/29.
//

#ifndef C_LANGUAGE_PROJ_ARRAYSTACK_H
#define C_LANGUAGE_PROJ_ARRAYSTACK_H



#include <stdio.h>
#define N 20

int stack(){
    struct Sta{
        int tail;
        int a[N]={1,2,3,4};//先只对前几位进行赋值
    };
    struct Sta s1;
    int i;
    s1.tail=3;

    //减少一个数字
    s1.tail--;
    for(i=0;i<s1.tail;i++){
        printf("%d",s1.a[i]);
    }
    //添加一个数字
    int m;
    s1.tail++;
    printf("Please scan the inserted number");
    scanf("%d",&m);
    s1.a[s1.tail-1]=m;

}
#endif //C_LANGUAGE_PROJ_ARRAYSTACK_H
