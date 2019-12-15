//
// Created by 86139 on 2019/12/13.
//

#ifndef C_LANGUAGE_PROJ_STRCOPY_H
#define C_LANGUAGE_PROJ_STRCOPY_H


#include <stdio.h>
void strcopy(char *copy,char scan[]){
    int i=0;
    while (scan[i]!='\0'){
        copy[i]=scan[i];
        i++;
    }
    copy[i]='\0';//如果补不上会随机分配一个字符（还要注意是补\0，只补0会多一项……
    return;
}
//主函数：
/*
   char str[20];//先随便定义一个值？
   strcopy(str,"A string");//数组直接传首地址
   printf("%s",str);*/
#endif //C_LANGUAGE_PROJ_STRCOPY_H
