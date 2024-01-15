#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);  // ≥ı ºªØ∆Â≈Ã

void DisplayBoard(char board[ROWS][COLS], int row, int col);  // œ‘ æ∆Â≈Ã

void SetMine(char board[ROWS][COLS], int row, int col);  // ≤º÷√¿◊

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);  // ≈≈≤È¿◊