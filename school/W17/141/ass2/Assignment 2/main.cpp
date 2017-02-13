///////////////////////////////
// Name: Mohamed Murtadi      /
// Purpose: CS 60-141 W17     /
// Assignment 2               /
///////////////////////////////

#include <stdio.h>

int findStart(char maze[][12]);
void mazeTraverse(char maze);
void printMaze();
int validMove(int current, char maze[][12]);
int coordsAreEdge(char maze[][12]);



int main(void){
    // position facing N,E,S,W == 0,1,2,3.
    // if at position 0 == facing north, right arm facing east.
    // start facing east, arm on south position.
    int position = 1;
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
    int start = findStart(maze), current;
    printf("%d", start);



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

void mazeTravers(char maze){

}