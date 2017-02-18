///////////////////////////////
// Name: Mohamed Murtadi      /
// Purpose: CS 60-141 W17     /
// Assignment 2               /
///////////////////////////////

#include <stdio.h>

int findStart(char maze[][12]);
int findEnd(char maze[][12]);
void printMaze(char maze[][12]);
int validMove(int current[], int direction, char maze[][12]);

int main(void){

	// array initialization with maze from assisnment
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

	// intialization variables and arrays
    // 'start' array finds starting location if exists
	// 'current' keeps track of current position
	// 'direction' keeps track of direction you are facing: N,E,S,W == 0,1,2,3 if at direction 0 == facing north, right arm on east wall.
	// 'end' checks to see if maze inputed is solvable                         

    int start = findStart(maze), current[2] = {0}, direction = 1, end = findEnd(maze);

    // 'end' checks to see if maze inputed is solvable                         
    if (end == 12){
        printf("No Exit! you're stuck in this maze forever");
        return 0;
    }
    // shows user his starting direction
    current[0] = start;
    maze[start][0] = 'x';

    // loops and updates array until reaches end direction;
    do {
        // printMaze(maze);
        direction = validMove(current, direction, maze);

        // print out for manual input to see path of maze
        printf("Press any key to continue\n");
        getchar();
        printf("\n\n%d\n\n",direction);
		printMaze(maze);
        printf("\n\n%d\n\n",direction);

    } while (maze[end][11] != 'x');
    printMaze(maze);

    return 0;
}

// Objective: checks first position in each row to find a 0 indicating the starting position
// Input: Maze 
// Output: coordinate of which row holds the starting 0
int findStart(char maze[][12]){
    for (int i = 0; i < 12; i++){
        if (maze[i][0] == '0'){
            return i;
        }
    }
    return 0;
}
// Objective: finds position that holds a 0 at coloumn 12
// Input: maze 
// Output: coordinate for exit if exists else returns 12 which is placeholder to break loop
int findEnd(char maze[][12]){
    for (int i = 0; i < 12; i++){
        if (maze[i][11] == '0'){
            return i;
        }
    }
    return 12;
}
// Objective: checks directions arround current direction and chooses optimal next step using hand on right wall algorithm
// Input: current direction coordinates, current direction and maze. 
// Output: optimal next position that holds either a 0 or x while keeping "hand on right wall"
int validMove(int current[], int direction, char maze[][12]) {
    switch (direction) {
    	// reminder each "case" indicates the direction the player is facing 0,1,2,3 == North, East, South, West
        case 0 :
        // each if statement is different and makes sure program follows rule of keeping hand on right wall
        // and checking appropriate adjascent coordinates
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
// Objective: prints updated maze with 
// Input: reference to arracy holding maze 
// Output: Maze displayed in 1,0, X's
void printMaze(char maze[][12]){
    for (int i = 0; i<12; i++){
        for (int j = 0; j < 12; j++){
            printf("%c\t", maze[i][j]);
        }
        printf("\n");
    }
}

