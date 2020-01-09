//
// Created by 86139 on 2019/12/29.
//

#ifndef C_LANGUAGE_PROJ_SORTFROMBEAR_H
#define C_LANGUAGE_PROJ_SORTFROMBEAR_H


#include <iostream>
using namespace std;

//冒泡排序
void BublleSort (int arr [], int n)
{
    int i, j, temp;
    for(j=0; j<n-1; j++ )
        for(i=0; i<n-j-1; i++ ){
            if(arr[i]>arr[i+1]){
                temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

}
//插入排序
void InsertSort( int arr[],int n){
    int i,j,temp;
    for(i=1; i<n; i++){
        temp = arr[i];
        for(j=i-1; j>=0 && arr[j]>temp; j--){
            arr[ j + 1 ] = arr[ j ];
        }
        arr[ j + 1 ] = temp;
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
//希尔排序
void ShellSort(int arr[], int n)
{
    int i, j, gap;
    for (gap = n / 2; gap > 0; gap /= 2) {
        for (i = 0; i < gap; i++)
            for (j = i + gap; j < n; j += gap)
                if (arr[j] < arr[j - gap]){
                    int temp = arr[j];
                    int k = j - gap;
                    while (k >= 0 && arr[k] > temp){
                        arr[k + gap] = arr[k];
                        k -= gap;
                    }
                    arr[k + gap] = temp;
                }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
//快速排序
void QuickSort(int arr[], int l, int r){
    if (l < r){
        int i = l, j = r, x = arr[l];
        while (i < j){
            while(i < j && arr[j] >= x)
                j--;
            if(i < j)
                arr[i++] = arr[j];
            while(i < j && arr[i] < x)
                i++;
            if(i < j)
                arr[j--] = arr[i];
        }
        arr[i] = x;
        QuickSort(arr, l, i - 1);
        QuickSort(arr, i + 1, r);
    }
    for(int i=0;i<r+1;i++){
        cout << arr[i] << " ";
    }
}


#endif //DATASTRUCTURE_SORT00_H

//
// Created by liyi on 19-6-1.
//

#ifndef DATASTRUCTURE_SORT01_H
#define DATASTRUCTURE_SORT01_H

#include <iostream>
using namespace std;

//选择排序
void SelectSort(int arr[], int n)
{
    int i = 0, j = 0, iindex = 0;
    int temp = 0;
    int iMin = 0;
    for (i = 0; i < n;i++){
        iMin = arr[i];
        iindex = i;
        for (j = i + 1; j < n;j++){
            if (arr[j] < iMin){
                iMin = arr[j];
                iindex = j;
            }
        }
        if ( i != iindex ){
            temp = arr[iindex];
            arr[iindex] = arr[i];
            arr[i] = temp;
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
//堆排序
typedef int ElemType;
void HeapAdjust(ElemType H[], int start, int end)
{
    ElemType temp = H[start];
    for(int i = 2*start + 1; i<=end; i*=2){

        if(i<end && H[i]<H[i+1]){
            ++i;
        }
        if(temp > H[i]){
            break;
        }
        H[start]= H[i];
        start = i;
    }
    H[start]= temp;
}
void HeapSort(ElemType arr[], int n){
    for(int i=n/2; i>=0; --i){
        HeapAdjust(arr,i,n);
    }
    for(int i=n-1; i>0; --i){
        ElemType temp=arr[i];
        arr[i] = arr[0];
        arr[0] = temp;
        HeapAdjust(arr,0,i-1);
    }
    for(int i=0;i<n-1;i++){
        cout << arr[i] << " ";
    }
}
//归并排序
void Merge(int *arry, int left, int mid, int right){
    int *temp = new int[right - left];
    int t = 0;
    int i = left;
    int j = mid;
    while (i < mid || j < right){
        if (i>= mid){
            temp[t++] = arry[j++];
        }
        else if (j>= right){
            temp[t++] = arry[i++];
        }
        else{
            if (arry[i] < arry[j]){
                temp[t++] = arry[i++];
            }
            else{
                temp[t++] = arry[j++];
            }
        }
    }
    t = 0;
    for (int i = left; i < right; i++){
        arry[i] = temp[t++];
    }
    delete[] temp;
}
void MergeSort(int *arry, int left, int right){
    if (left + 1 < right){
        int mid = (left + right) / 2;
        MergeSort(arry, left, mid);
        MergeSort(arry, mid, right);
        Merge(arry, left, mid, right);
    }
}

#endif //C_LANGUAGE_PROJ_SORTFROMBEAR_H
