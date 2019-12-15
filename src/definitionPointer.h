//
// Created by 86139 on 2019/12/13.
//

#ifndef C_LANGUAGE_PROJ_DEFINITIONPOINTER_H
#define C_LANGUAGE_PROJ_DEFINITIONPOINTER_H


#include <stdio.h>
void definitionPointer() {
 /*   char *p1 = "A string";
    char s[] = "Another string";
    printf("%c\t",*p1);//结果显示A，即第一个字符的地址
    printf("%s\n",p1);
    for(;*p1!='\0';p1++){
        printf("%c",*p1);//要加取地址符
    }*/
    int a[6]={1,2,3,4,5,6};
    int *p;
    p=a;
    /*printf("%d\t",*p);
    printf("%d\t",*(++p));*/
 /*   printf("%d\t",*p++);//1
    printf("%d\t",*++p);*/
    printf("%d\t",*(p--));

}
#endif //C_LANGUAGE_PROJ_DEFINITIONPOINTER_H
