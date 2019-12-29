//
// Created by 86139 on 2019/12/23.
//

#ifndef C_LANGUAGE_PROJ_DFS_MAZE_H
#define C_LANGUAGE_PROJ_DFS_MAZE_H


#include <stdio.h>
int des_x,des_y;//destination x,y
int min=100000;//record the min step
int  a[5][6];//迷宫大小
int next[4][2]={'0,1','0,-1','1,0','-1,0'};//方向向量
int k,j;
int dfs_maze(int tx,int ty,int step){
    if(tx==des_x &&ty==des_y){//到达终点,临界处
        if(min>step){
            min=step;
            //printf("%d",min);//可以更新路线？还是最后只打印唯一一个？最后要是打印唯一一个……还要用指针传过去啊(救命算了
        }
        a[tx][ty]=0;
        return 0;
    }

    for(k=0;k<3;k++) {
            tx = tx + next[k][0];
            ty= ty + next[k][1];

    }
}
#endif //C_LANGUAGE_PROJ_DFS_MAZE_H
