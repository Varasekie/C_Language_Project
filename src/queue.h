//
// Created by 86139 on 2019/12/20.
//

#ifndef C_LANGUAGE_PROJ_QUEUE_H
#define C_LANGUAGE_PROJ_QUEUE_H


#include <stdio.h>


#define N 20
int queue(){
    int i,m;
    struct Que{
        int head;
        int tail;
        int a[N]={1,2,3,4};
    };
    struct Que q1;
    q1.head=0;
    q1.tail=3;

    //添加末尾的数字1个
    printf("please scan the added number:");
    scanf("%d",&m);
    q1.tail++;
    q1.a[q1.tail]=m;
    for (int i = q1.head; i <= q1.tail; i++) {
        printf("%d\t",q1.a[i]);
    }
    printf("\n");

    //删去第一个数
    q1.head++;
    for (int i = q1.head; i <= q1.tail; i++) {
        printf("%d", q1.a[i]);
    }
}
#endif //C_LANGUAGE_PROJ_QUEUE_H
