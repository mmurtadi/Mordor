///////////////////////////////
// Name: Mohamed Murtadi      /
// Purpose: CS 60-141 W17     /
// Assignment 2               /
///////////////////////////////

#include <stdio.h>

int findStart(char maze[][12]);
int findEnd(char maze[][12]);
void printMaze(char maze[][12]);
int validMove(int current[], int position, char maze[][12]);

int main(void){
    // position facing N,E,S,W == 0,1,2,3.
    // if at position 0 == facing north, right arm facing east.
    // start facing east, arm on south position.

    char maze[12][12] = {{'1','1','1','1','1','1','1','1','1','1','1','1'},
                         {'1','0','0','0','1','0','0','0','0','0','0','1'},
                         {'0','0','1','0','1','0','1','1','1','1','0','1'},
                         {'1','1','1','0','1','0','0','0','0','1','0','1'},
                         {'1','0','0','0','0','1','1','1','0','1','0','0'},
                         {'1','1','1','1','0','1','0','1','0','1','0','1'},
                         {'1','0','0','1','0','1','0','1','0','1','0','1'},
                         {'1','1','0','1','0','1','0','1','0','1','0','1'},
                         {'1','0','0','0','0','0','0','0','0','1','0','1'},
                         {'1','1','1','1','1','1','0','1','1','1','0','1'},
                         {'1','0','0','0','0','0','0','1','0','0','0','1'},
                         {'1','1','1','1','1','1','1','1','1','1','1','1'}};
    int start = findStart(maze), current[2] = {0}, position = 1, end = findEnd(maze);
    if (end == 12){
        printf("No Exit! you're stuck in this maze forever");
        return 0;
    }

    current[0] = start;

    do {
        printMaze(maze);
        position = validMove(current, position, maze);
        // printf("Press any key to continue\n");
        // getchar();
        printf("\n\n%d\n\n",position);

        printMaze(maze);
        printf("\n\n%d\n\n",position);


    } while (maze[end][11] != 'x');


    return 0;
}

int findStart(char maze[][12]){
    for (int i = 0; i < 12; i++){
        if (maze[i][0] == '0'){
            return i;
        }
    }
    return 0;
}

int findEnd(char maze[][12]){
    for (int i = 0; i < 12; i++){
        if (maze[i][11] == '0'){
            return i;
        }
    }
    return 12;
}

int validMove(int current[], int position, char maze[][12]) {
    switch (position) {
        case 0 :
            if (maze[current[0]][(current[1] + 1)] == '0' || maze[current[0]][(current[1] + 1)] == 'x') {
                maze[current[0]][(current[1] + 1)] = 'x';
                current[1] += 1;
                return 1;
            } else if (maze[current[0] - 1][(current[1])] == '0' || maze[current[0] - 1][(current[1])] == 'x') {
                maze[current[0] - 1][(current[1])] = 'x';
                current[0] -= 1;
                return 0;
            } else if (maze[current[0]][(current[1] - 1)] == '0' || maze[current[0]][(current[1] - 1)] == 'x') {
                maze[current[0]][(current[1] - 1)] = 'x';
                current[1] -= 1;
                return 3;
            }
            current[0] += 1;
            return 2;
        case 1 :
            if (maze[current[0] + 1][current[1]] == '0' || maze[current[0] + 1][current[1]] == 'x') {
                maze[current[0] + 1][current[1]] = 'x';
                current[0] += 1;
                return 2;
            } else if (maze[current[0]][current[1] + 1] == '0' || maze[current[0]][current[1] + 1] == 'x') {
                maze[current[0]][current[1] + 1] = 'x';
                current[1] += 1;
                return 1;
            } else if (maze[current[0] - 1][current[1]] == '0' || maze[current[0] - 1][current[1]] == 'x') {
                maze[current[0] - 1][current[1]] = 'x';
                current[0] -= 1;
                return 0;
            }
            current[1] -= 1;
            return 3;

        case 2 :
            if (maze[current[0]][current[1] - 1] == '0' || maze[current[0]][(current[1] - 1)] == 'x') {
                maze[current[0]][current[1] - 1] = 'x';
                current[1] -= 1;
                return 3;
            } else if (maze[(current[0] + 1)][current[1]] == '0' || maze[current[0] + 1][current[1]] == 'x') {
                maze[(current[0] + 1)][current[1]] = 'x';
                current[0] += 1;
                return 2;
            } else if (maze[current[0]][current[1] + 1] == '0' || maze[current[0]][(current[1] + 1)] == 'x') {
                maze[current[0]][current[1] + 1] = 'x';
                current[1] += 1;
                return 1;
            }
            current[0] -= 1;
            return 0;
        case 3 :
            if (maze[current[0] - 1][current[1]] == '0' || maze[current[0] - 1][current[1]] == 'x') {
                maze[current[0] - 1][current[1]] = 'x';
                current[0] -= 1;
                return 0;
            } else if (maze[current[0]][current[1] - 1] == '0' || maze[current[0]][current[1] - 1] == 'x') {
                maze[current[0]][current[1] - 1] = 'x';
                current[1] -= 1;
                return 3;
            } else if (maze[current[0] + 1][current[1]] == '0' || maze[current[0] + 1][current[1]] == 'x') {
                maze[(current[0] + 1)][current[1]] = 'x';
                current[0] += 1;
                return 2;
            }
            current[1] += 1;
            return 1;
        default:
            break;

    }
}
void printMaze(char maze[][12]){
    for (int i = 0; i<12; i++){
        for (int j = 0; j < 12; j++){
            printf("%c\t", maze[i][j]);
        }
        printf("\n");
    }
}

