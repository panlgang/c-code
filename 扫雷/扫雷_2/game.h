#define _CRT_SECURE_NO_WARNINGS 2
#define ROWS 11
#define COLS 11
#define ROW 9
#define COL 9
#define Count 10
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void menu();
void init_arr(char mine[ROWS][COLS],char show[ROW][COL]);
void display_show(char show[ROW][COL],int x,int y);
void display_mine(char mine[ROWS][COLS], int x, int y);
void set_mine(char mine[ROWS][COLS], int x, int y);
void swap_mine(char mine[ROWS][COLS],char show[ROW][COL], int row, int col);
int get_count(char  mine[ROWS][COLS],int x,int y);
void avoid(char mine[ROWS][COLS], int x, int y);
//void open_mine (char mine[ROWS][COLS], char show[ROW][COL], int x, int y);