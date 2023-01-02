#include <stdio.h>
#include <string.h>

#define MULTIPLE5 5

#define MAX_LIVES 10
#define MIN_LIVES 1

#define MAX_MOVES 15
#define MIN_MOVES 3

#define MAX_PATH_LENGTH 70
#define MIN_PATH_LENGTH 10

struct playerInfo
{
    int lives;
    char symbol;
    char history[MAX_PATH_LENGTH];
    int treasureCounter;
    int nextMove;

};

struct gameInfo
{
    int moves;
    int pathLength;
    int bombs[MAX_PATH_LENGTH];
    int treasure[MAX_PATH_LENGTH];
};

int flag = 0; 
int flag2 = 0;
int i = 0;
int j = 0;
char selection[30];