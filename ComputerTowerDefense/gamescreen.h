/* File:   gamescreen.h 
   Author: Nancy Wong
   Desc:   header file for gamescreen.cpp
*/

#ifndef GS_H
#define GS_H

#include <vector>

#include "board.h"

#define VEC_L 15
#define VEC_W 50

#define BUY        1
#define NOTHING    2
#define EXIT       0
#define MIN_VAL    0
#define MAX_VAL    50

#define MAIN       0
#define NORTH      1
#define EAST       2
#define SOUTH      3 
#define WEST       4
 
#define X_MIN      0
#define X_MAX      49
#define Y_MIN      0
#define Y_MAX      14

#define DELAY      4

#define WIDTH_1    2
#define WIDTH_2    50

#define WIN        0
#define LOSE       1

using namespace std;

// print stuff
void PrintBoard      (vector< vector<char> > *GameScreen);
void PrintStats      (Board *GameBoard);
void PrintSubContents();
void PrintSubMenu    (Board *GameBoard);
void PrintScore      (int score);
void PrintHealth     (int health);
bool PrintMenu(Board *GameBoard);

void Reprompt(Board *GameBoard);
void Refresh(vector< vector<char> > *GameScreen, Board *GameBoard, int count);
void GameOver();

#endif /* GS_H */
