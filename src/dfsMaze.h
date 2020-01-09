//
// Created by 86139 on 2019/12/23.
//

#ifndef C_LANGUAGE_PROJ_DFSMAZE_H
#define C_LANGUAGE_PROJ_DFSMAZE_H


#include <stdio.h>

#define M 4
#define N 4

int des_x, des_y;//destination x,y
int a[M][N];//迷宫大小，以及障碍物(现在没有初始障碍物
int b[M][N] = {0};//标记已经走过的路
int min = 100000;//record the min step
int next[4][2] = {{0,  1},//下
                  {0,  -1},//上
                  {1,  0},//右
                  {-1, 0}};//左方向向量
int k, j;

//在main函数里面协商b[0][0]=1;做个标记
void dfs_maze(int tx, int ty, int step) {
    if (tx == des_x && ty == des_y) {//到达终点,临界处
        if (min >= step) {
            min = step;
        }
        return ;
    }
    for (k = 0; k < 3; k++) {
        tx = tx + next[k][0];
        ty = ty + next[k][1];//先走一步方向向量（与方向向量的顺序无关

        if (tx < 0 || tx > M - 1 || ty < 0 || ty > N - 1) {//当点在地图外，continue 开始新的迭代,注意是或
            tx = tx - next[k][0];
            ty = ty - next[k][1];
            continue;
        }
        if (b[tx][ty] != 1) {
            b[tx][ty] = 1;
            dfs_maze(tx, ty, step + 1);
            b[tx][ty] = 0;
        } else {
            tx = tx - next[k][0];
            ty = ty - next[k][1];
        }
    }
    return ;
}

//main函数

/*int start_x, start_y;
int i;
int j;
printf("please scan the destination");
scanf("%d %d", &des_x, &des_y);//目标地址
printf("please scan the enter");
scanf("%d %d", &start_x, &start_y);//初始地址
b[start_x][start_y] = 1;
dfs_maze(start_x,start_y,0);
printf("%d", min);*/


#endif //C_LANGUAGE_PROJ_DFSMAZE_H
