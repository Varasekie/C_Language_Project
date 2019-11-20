
#include <io.h>
#include <direct.h>
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX      256

long total;

int countLines(cinst char *filename);

void findAllCodes(const char *path);

void findALLFiles(const char *path);

int countLines(const char *filename) {
    FILE *fp
    int count = 0;
    int temp;

    if ((fp = fopen(filename, "r")) == NULL {
        fprintf(stderr, "Can not open the file:%s\n", filename);
        return 0;
    }

    while ((temp = fgetc(fp)) != EOF) {
        if (temp == '\n') {
            count++;
        }
    }

    fclose(fp);

    return count;
}

void findAllCodes(const char *path) {
    struct _finddata_t fa;
    long handle;
    char thePath[MAX], target[MAX];

    strcpy(thePath, path);
    if ((handle = _findfirst(strcat(thePath, "/*.c"), &fa)) != -1L)
}
