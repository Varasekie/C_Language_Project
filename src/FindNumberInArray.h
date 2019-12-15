//
// Created by 86139 on 2019/12/13.
//

#ifndef C_LANGUAGE_PROJ_FINDNUMBERINARRAY_H
#define C_LANGUAGE_PROJ_FINDNUMBERINARRAY_H

#include <stdio.h>

int FindnumberInArray(int a[],int s,int N){
    int i;
    for(i=0;i<N;i++){
        if (a[i]==s){
            return i;
        } else return 0;
    }
}
//主函数：
/* int s;
   int i;
   int a[N];
   printf("scan the number you want to find");
   scanf("%d",&s);
   printf("scan the array");
   for(i=0;i<N;i++){
       scanf("%d",&a[i]);
   }
   printf("%d",FindnumberInArray(a,s,N));*/

int FindstringInStringarray(){

}
#endif //C_LANGUAGE_PROJ_FINDNUMBERINARRAY_H
