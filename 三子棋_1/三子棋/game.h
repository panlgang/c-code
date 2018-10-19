#ifndef  _GAME_H__
#define  _GAME_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define ROW 3
#define COL 3
struct poiner
{
	int x;
	int y;
};
void play_game();
void init(char map[ROW][COL], int row, int col);   //地图3*3的矩阵；
void display(char map[ROW][COL], int row, int col); //输出地图
void player_move(char map[ROW][COL], int row, int col); //玩家移动函数
void computer_move(char map[ROW][COL], int row, int col);//电脑移动函数
char is_win(char map[ROW][COL], int row, int col);//走完后，判断
#endif