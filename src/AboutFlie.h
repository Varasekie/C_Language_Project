//
// Created by 86139 on 2019/12/24.
//

#ifndef C_LANGUAGE_PROJ_ABOUTFLIE_H
#define C_LANGUAGE_PROJ_ABOUTFLIE_H


#include <stdio.h>
#include <stdlib.h>
#include <io.h>


int FileOpen() {
    FILE *fp, *fp3;
    if ((fp = fopen("D:\\Compiler_Proj\\C_Homework_Proj\\C_Language_Proj\\src\\Fib.h", "r")) == NULL) {
        printf("Fail0");
        exit(1);
    } else printf("succeed");
    if ((fp3 = fopen("D:\\Compiler_Proj\\C_Homework_Proj\\C_Language_Proj\\src\\queue.h", "r")) == NULL) {
        printf("Fail1");
        exit(2);
    } else printf("succeed1");
    fclose(fp);
    fclose(fp3);
}

int FileWrite() {
    FILE *fp2, *fp1;
    int c;
    if ((fp1 = fopen("C:\\Users\\86139\\Desktop\\test1.txt", "r")) == NULL) {
        printf("FAIL1");
        exit(1);
    } else printf("SUCCEED1");
    fp1 = fopen("C:\\Users\\86139\\Desktop\\test1.txt", "r");
    if ((fp2 = fopen("C:\\Users\\86139\\Desktop\\test2.txt", "w")) == NULL) {
        printf("Fail2");
        exit(2);
    } else printf("SUCCEED2");
    fp2 = fopen("C:\\Users\\86139\\Desktop\\test2.txt", "w");
    while (!(feof(fp1))) {
        c = fgetc(fp1);
        fputc(c, fp2);
    }
    fclose(fp1);
    fclose(fp2);
}

#define N 3

int binarywrite() {
    FILE *fp3;
    struct student {
        char name;
        int num;
        int point;
    };
    int i;
    struct student st[N];
    if ((fp3 = fopen("C:\\Users\\86139\\Desktop\\student.bin", "ab")) == NULL) {
        printf("Fail");
        exit(3);
    }
    fopen("C:\\Users\\86139\\Desktop\\student.bin", "ab");
    printf("please scan the name,number,point");
    for (i = 0; i < N; i++) {
        scanf("%s %d %f", &st[i].name, &st[i].num, &st[i].point);
        fwrite(&st[i], sizeof(student), 1, fp3);
    }
    fclose(fp3);
}

int SystemIO() {
    int fo, fi;
    char c;
    fi = creat("C:\\Users\\86139\\Desktop\\test3.txt", 1);
    fo = creat("C:\\Users\\86139\\Desktop\\test4.txt", 1);
    for (int i = 0; i < 5; i++) {
        scanf("%c", &c);
        write(fo, &c, 1);
    }
    close(fo);
    fo = open("C:\\Users\\86139\\Desktop\\test4.txt", 0);
    while (read(fo, &c, 1) > 0) {
        write(fi, &c, 1);
        printf("%c", c);
    }
    while (read(fi, &c, 1) > 0) {
        printf("%c", c);
    }
    close(fi);
    close(fo);
}

#endif //C_LANGUAGE_PROJ_ABOUTFLIE_H
