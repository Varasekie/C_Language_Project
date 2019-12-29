//
// Created by 86139 on 2019/12/27.
//

#ifndef C_LANGUAGE_PROJ_LINKEDLIST_H
#define C_LANGUAGE_PROJ_LINKEDLIST_H


#include <stdio.h>
#include <stdlib.h>

#define N 4

int LinkedList() {
    struct node {
        int j;//存放数
        int countnum;//记录是链表的第几个
        struct node *next;
    } *first, *last, *p, *l;
    int scannum;
    char ch;
    int i;
    p = (struct node *) malloc(sizeof(struct node));//下面创建第一个节点
    printf("scan the number");
    scanf("%d", &scannum);
    p->j = scannum;
    p->next = NULL;
    p->countnum = 1;
    first = last = p;
    for (i = 1; i < N; i++) {//在最后插入N-1个节点
        p = (struct node *) malloc(sizeof(struct node));
        printf("please scan the number");
        scanf("%d", &scannum);
        p->j = scannum;
        p->countnum = i + 1;
        p->next = NULL;
        last->next = p;
        last = p;
    }

    p = first;
    while (p != NULL) {//遍历
        printf("%d", p->j);
        p = p->next;//最后一定要将p的指针向下移动
    }
    printf("\n");

    //计算链表的长度(要用多次，写成函数

    int lenth = 0;
    p = first;
    while (p != NULL) {
        lenth++;
        p = p->next;
    }
    //printf("%d", lenth);


    //下面为在中间插入一个节点

    int m;//插入的第几位
    l = first;//赋初值
    printf("\ninsert the number between m and m+1.please scan m");
    scanf("%d", &m);
    if (m > last->countnum) {//判断是否超出长度(此处是用的是类似数组一样的东西，但是很麻烦
        printf("wrong");
        return 0;
    }


    p = first;//重新赋值,计算链表长度
    lenth = 0;
    while (p != NULL) {
        lenth++;
        p = p->next;
    }
    if(m>lenth){
        printf("WRONG");
        return 0;
    }

    p = (struct node *) malloc(sizeof(struct node));
    printf("please scan the inserted number");
    scanf("%d", &scannum);
    for (i = 0; i < m - 1; i++) {//链表一个个读取
        l = l->next;
    }
    p->next = l->next;
    l->next = p;
    p->j = scannum;

    //再遍历
    p = first;
    while (p != NULL) {
        printf("%d", p->j);
        p = p->next;//最后一定要将p的指针向下移动
    }

    //删除某个节点
    int n;
    l=first;
    printf("please choose the deleted note");
    scanf("%d", &n);
    p = first;//重新赋值,计算链表长度
    lenth = 0;
    while (p != NULL) {
        lenth++;
        p = p->next;
    }
    if(n>lenth){
        printf("WRONG");
        return 0;
    }

    for(i=0;i<n-2;i++){
        l=l->next;
    }
    p=l->next;//把p重新利用起来，重新赋值，当作要被删除的那个节点
    l->next=p->next;
    //再遍历
    p = first;
    while (p != NULL) {
        printf("%d", p->j);
        p = p->next;//最后一定要将p的指针向下移动
    }

}

#endif //C_LANGUAGE_PROJ_LINKEDLIST_H
