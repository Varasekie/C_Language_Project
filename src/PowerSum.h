//
// Created by 86139 on 2019/11/19.
//

#ifndef C_LANGUAGE_PROJ_POWERSUM_H
#define C_LANGUAGE_PROJ_POWERSUM_H

#include <stdio.h>

long power(int k, int n) {
    long int a, j;

    //  ��Ϊa�Ľ׳�  ����a�ĳ�ʼֵӦ����n
    a = n;
    //  ��Ϊ��n��k��  ����ѭ��Ӧ����   j<k    a*=n
    /*for(j=1;j<n;j++){
        a*=k;
    }*/
    for (j = 1; j < k; j++) {
        a = a * n;
    }
    printf("��n����k����:%d\n", a);
    return a;
}

/*
 *   n�Ǹ���
 *   k�ǽ׳�
 */

long sum_power(int k, int n) {
    long int m, j;

    //  ����Ҫʹ��  m+=  ����Ӧ�ø�mһ����ʼֵ
    m = 0;
    for (j = 1; j <= n; j++) {

        //  (1)�ѽ׳˸�power(2)��Ϊn�Ƕ�ֵ5Ӵ������ʹ��jȥ����Ӵ     ����Ӧ����  power(k,j)
        //m+=power(m,n);
        m += power(k, j);
        printf("ǰn������k�׺�Ϊ��%d\n", m);
    }
    return m;
}

int powerSum() {

    /*
     *   n�Ǹ���
     *   k�ǽ׳�
     */
    int n, k;
    printf("������k,n");
    scanf("%d %d", &k, &n);

    //   ���k,n
    printf("k��n��ֵ�ֱ�Ϊ��%d\t%d\n", k, n);
    printf("%d", sum_power(k, n));
    return 0;

}


#endif //C_LANGUAGE_PROJ_POWERSUM_H
