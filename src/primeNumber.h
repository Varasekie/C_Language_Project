//
// Created by 86139 on 2019/11/29.
//

#ifndef C_LANGUAGE_PROJ_PRIMENUMBER_H
#define C_LANGUAGE_PROJ_PRIMENUMBER_H


#include<math.h>
#include<stdio.h>

void primeNumber(){
    int i,m,n,sum=0;
    printf("请输入n，将输出3到n的素数的平方和：");
    scanf("%d",&n);
    if(n<3)
        printf("不符合要求");
        else
            for(m=3;m<=n;m++) {
              while (m%i==0){
                  i++;
              }
              if(i==m)//先让除数达到m，才能判断是素数。
                  sum=sum+(i*i);
            }

printf("%d",sum);

}
#endif //C_LANGUAGE_PROJ_PRIMENUMBER_H
