//
// Created by 86139 on 2019/12/10.
//

#ifndef C_LANGUAGE_PROJ_QUICKSORT_H
#define C_LANGUAGE_PROJ_QUICKSORT_H

#include <stdio.h>



void quicksort(int a[], int left, int right) { //i为从左边开始，j从右边开始
    int i,j;
    i=left,j=right;//多添加一个变量，让left和right能作为某个值存放着
    int mid = a[left];//mid作为基准数进行运算（x）将mid作为一个值存放
    int temp;
    if (i > j) {
        return;
    }
    while (i != j) {
        while (mid< a[j]&&j>i) {
            j--;
        }
        while (mid >= a[i]&&i<j) {
            i++;
        }
        if (i < j) {
            temp = a[i];//将左右两边交换
            a[i] = a[j];
            a[j] = temp;
        }
    }
    a[left]=a[i];
    a[i]=mid;//归位
    quicksort(a, left, i-1);//进行左边排序
    quicksort(a, i+1,right );//右边排序
}
//主函数部分
/*   int a[N];int left,right,i;
     printf("please scan the %d number",N);
     for(i=0;i<N;i++){
         scanf("%d",&a[i]);
     }
     left=0;right=N-1;
     quicksort2(a, left, right);//这里a是数组地址
     for(i=0;i<N;i++){
         printf("%d\t",a[i]);
     }*/



void quicksort2(int a[], int left, int right) { //i为从左边开始，j从右边开始
    int i,j;
    i=left,j=right;//多添加一个变量，让left和right能作为某个值存放着
    int mid = a[left];//mid作为基准数进行运算（x）将mid作为一个值存放
    int temp;
    if (i > j) {
        return;
    }
    while (i != j) {
        while (mid< a[j]&&j>i) {
            j--;
        }
        if(i<j){
            a[i]=a[j];
            i++;
        }
        while (mid > a[i]&&i<j) {
            i++;
        }
        if(i<j){
            a[j]=a[i];
            j--;
        }
    }
    a[i]=mid;//归位
    quicksort2(a, left, i-1);//进行左边排序
    quicksort2(a, i+1,right );//右边排序
}
#endif //C_LANGUAGE_PROJ_QUICKSORT_H
