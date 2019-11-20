//
// Created by 86139 on 2019/11/19.
//

#ifndef C_LANGUAGE_PROJ_POWERSUM_H
#define C_LANGUAGE_PROJ_POWERSUM_H

#include <stdio.h>

long power(int k, int n) {
    long int a, j;

    //  因为a的阶乘  所以a的初始值应该是n
    a = n;
    //  因为是n的k阶  所以循环应该是   j<k    a*=n
    /*for(j=1;j<n;j++){
        a*=k;
    }*/
    for (j = 1; j < k; j++) {
        a = a * n;
    }
    printf("第n个的k阶是:%d\n", a);
    return a;
}

/*
 *   n是个数
 *   k是阶乘
 */

long sum_power(int k, int n) {
    long int m, j;

    //  由于要使用  m+=  所以应该给m一个初始值
    m = 0;
    for (j = 1; j <= n; j++) {

        //  (1)把阶乘给power(2)因为n是定值5哟，所以使用j去计算哟     所以应该是  power(k,j)
        //m+=power(m,n);
        m += power(k, j);
        printf("前n个数的k阶和为：%d\n", m);
    }
    return m;
}

int powerSum() {

    /*
     *   n是个数
     *   k是阶乘
     */
    int n, k;
    printf("请输入k,n");
    scanf("%d %d", &k, &n);

    //   检查k,n
    printf("k和n的值分别为：%d\t%d\n", k, n);
    printf("%d", sum_power(k, n));
    return 0;

}


#endif //C_LANGUAGE_PROJ_POWERSUM_H
