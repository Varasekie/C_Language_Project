//
//  main.c
//  ????????
//  ????????26????????
//  Created by licsber on 2018/11/15.
//  Copyright ? 2018 licsber. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 26
#define START 'a'

typedef struct node{
    char ch;
    int weight;
    struct node *lchild;
    struct node *rchild;
}node, *p_node;

typedef struct sheet{
    char ch;
    char code[ARRAY_SIZE];
    struct sheet *next;
} sheet, *p_sheet;

enum error_code{
    CANNOT_ALLOCATE_MEMORY,
    INPUT_IS_EMPTY
};

p_node container[ARRAY_SIZE];
char code[ARRAY_SIZE];
p_sheet line = NULL;

void error(int); // ???
void init(void);  // ?????
void add(void);  //???????????
void printWeight(void);  // ??????
p_node build(void);  // ????????? ????????
void freeEmpty(void);  // ??????0???????????
p_node create(void);  // ?????????
void freeNode(int);  // ?????????0?????
int getCount(void);  // ????????0??????
void sort(void);  // ?????????
void outputTree(p_node, int);  // ????????????
void output(void);
p_sheet initSheet(void);

int main() {
    init();
    p_node root = NULL;
    for (int action; ; ) {
        printf("please select the action:\n");
        printf("\
               0.?????n\
               1.?????????\n\
               2.???????????????\n\
               3.?????????\n\
               4.???\n\
               5.?????????\n\
               6.?????????????????n\
               4.\n\
               4.\n\
               9.????n\
               \n");
        scanf("%d", &action);
        getchar();  // ?????????????????
        switch (action) {
            case 0:
                init();
                break;
            case 1:
                add();
                freeEmpty();
                sort();
                line = initSheet();
                break;
            case 2:
                printf("the number of node is %d\n", getCount());
                break;
            case 3:
                printWeight();
                break;
            case 4:
                root =create();
                break;
            case 5:
                if (root == NULL) {
                    root = create();
                }
                outputTree(root, 0);
                break;
            case 6:
                output();
                break;
            case 9:
                return 0;
            default:
                printf("worng input\n");
                continue;
        }
    }
}

void error(int err_code){
    switch (err_code) {
        case CANNOT_ALLOCATE_MEMORY:
            printf("cannot allocate memory!\n");
            break;
        case INPUT_IS_EMPTY:
            printf("input is empty!\n");
            break;
    }
    exit(-1);
}

void init(void){
    for (int i = 0; i < ARRAY_SIZE; i++) {
        container[i] = (p_node)malloc(sizeof(node));
        if (!container[i]) {
            error(CANNOT_ALLOCATE_MEMORY);
        }
        container[i] -> ch = START + i;
        container[i] -> weight = 0;
        container[i] -> lchild = NULL;
        container[i] -> rchild = NULL;
    }
    printf("Init is done!\n");
}

void freeNode(int i){
    free(container[i]);
    container[i] = NULL;
}

void add(void){
    char ch;
    while ((ch = getchar()) != '\n') {
        container[ch - START] -> weight++;
    }
}

void sort(void){
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (!container[i]) {
            for (int j = i; j < ARRAY_SIZE; j++) {
                if (container[j]) {
                    container[i] = container[j];
                    container[j] = NULL;
                    break;
                }
            }
        }
    }
    for (int i = 0; i < getCount(); i++) {
        for (int j = 0; j < i; j++) {
            if (container[i] -> weight < container[j] -> weight) {
                p_node tmp = container[i];
                container[i] = container[j];
                container[j] = tmp;
            }
        }
    }
}

int getCount(void){
    int count = ARRAY_SIZE;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (!container[i] ||
            !container[i] -> weight) {
            count--;
        }
    }
    return count;
}

void printWeight(void){
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (!container[i]) {
            continue;
        }
        printf("%c weighs %d\n",
               container[i] -> ch,
               container[i] -> weight);
    }
}

p_node build(void){
    p_node tmp = (p_node)malloc(sizeof(node));
    if (tmp == NULL) {
        error(CANNOT_ALLOCATE_MEMORY);
    }
    tmp -> ch = '\0';
    tmp -> weight = container[0] -> weight +
                    container[1] -> weight;
    tmp -> lchild = container[0];
    tmp -> rchild = container[1];
    return tmp;
}

void freeEmpty(void){
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (!container[i]) {
            continue;
        }
        if (!container[i] -> weight) {
            freeNode(i);
        }
    }
}

p_node create(void){
    if (!container[1]) {
        return container[0];
    }
    container[0] = build();
    container[1] = NULL;
    sort();
    return create();
}

void outputTree(p_node root, int layer){
    if (root -> lchild && root -> rchild) {
        code[layer] = '0';
        outputTree(root -> lchild, layer + 1);
        code[layer] = '1';
        outputTree(root -> rchild, layer + 1);
        code[layer] = '\0';
    }
    else{
        code[layer] = '\0';
        printf("%c -> %s\n", root -> ch, code);
    }
}

void output(void){
    int weight = 0, count = 0, tmp = 0;
    for (int i = 0; i < getCount(); i++) {
        weight = container[i] -> weight;
        if (tmp != weight) {
            count++;
        }
        for (int j = 0; j < count; j++) {
            putchar(container[i] -> ch);
        }
        tmp = weight;
    }
    putchar('\n');
}

p_sheet initSheet(void){
    p_sheet head = (p_sheet)malloc(sizeof(sheet));
    head -> next = NULL;
    if (!head) {
        error(CANNOT_ALLOCATE_MEMORY);
    }
    for (int i = 0; i < getCount(); i++) {
        p_sheet tmp = (p_sheet)malloc(sizeof(sheet));
        if (!tmp) {
            error(CANNOT_ALLOCATE_MEMORY);
        }
        head -> ch = container[i] -> ch;
        head -> code[0] = '\0';
        if (!container[i+1]) {
            free(tmp);
            continue;
        }
        tmp -> next = head;
        head = tmp;
    }
    return head;
}
