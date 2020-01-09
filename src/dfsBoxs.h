//
// Created by 86139 on 2019/12/19.
//

#ifndef C_LANGUAGE_PROJ_DFSBOXS_H
#define C_LANGUAGE_PROJ_DFSBOXS_H


#include <stdio.h>
#define N 3  //N代表几个盒子
int book[1000];  //记录已经放过了的数字
int b[7];//盒子
int a[N]={7,2,9};
int dfsBox(int step){//站第几个盒子面前,a[]为手上有的牌
    int i;
    if(step==N+1){//到最后一步，打印这一次的所有盒子
        for(i=1;i<=N;i++){
            printf("%d",b[i]);
        }
        printf("\n");
        return 0;
    }
    for(i=1;i<=N;i++){
        if(book[a[i-1]]==0){
            b[step]=a[i-1];
            book[a[i-1]]=1;
            dfsBox(step+1);
            book[a[i-1]]=0;
        }
    }
    return 0;
}
#endif //C_LANGUAGE_PROJ_DFSBOXS_H
