#include<iostream>
#include<list>
#include<stdio.h>

// Maze size
#define N 4

bool solveMazeUtil( 
    int maze[N][N], int x, 
    int32_t y, int sol[N][N]);


/* A utility function to print solution
matrix sol[N][N] */

void printSolution(int sol[N][N])
{
        for (int i=0; i< N; i++) {
            for (int j = 0; j< N; j++)
                printf(" %d ", sol[i][j]);
            printf("\n");
            
        }
}

/* A utility function to check if x ,
y is valid index for N*N maze */

bool isSafe(int maze[N][N], int x, int y)
{
    // if (x,y outside maze) return false
    if(
        x>= 0 && x < N && y >=0
        && y < N && maze[x][y] ==1)
        return true;

    return false;

}

/* this function solves the maze problems using 
backtracking. It mainly uses solveMazeUtil() 
to solve the problem. It re turns false if no path is possible,
otherwise return true and prints the path in the form of 1s.
Please note that there may be more than one solutions, this
function prints one of the feasible solutions. */

bool solveMaze(int maze[N][N])
{
    int sol[N][N] = {{0,0,0,0},
                     {0,0,0,0},
                     {0,0,0,0},
                     {0,0,0,0}};


    if (solveMazeUtil ( maze,0,0,sol) == false) 
    {
        printf("Solution doesnt exists");
        return false;
    }

    printSolution(sol);
    return true;

}

/* A recursive utility function  to solve Maze problem */
bool solveMazeUtil(int maze[N][N], int x, int y, int sol[N][N])
{
    //if (x, y is goal) return true
    if(
        x== N-1 && y == N-1 && maze[x][y] ==1) {
            sol[x][y] = 1;
            return true;
        }


    // check if maze[x][y] is valid
    if(isSafe(maze, x, y) == true) {
    // check if the current block is already part of the solution path
    if(sol[x][y] = 1)
        return false;

        // mark x, y as part of solution path
        sol[x][y] = 1;

        /* Move foroward in the  x direction */
        if(solveMazeUtil (maze, x+1, y, sol) == true)
            return true;

            /* If the moving in y direction doesnt give solution then
             Move down the y direction */
             if(solveMazeUtil(maze, x, y-1, sol) == true)
                return true;

        /* If none of the above movements work then backtrack: unmark x,y as a part
            of solution path */

            sol[x][y] = 0;
            return false;

    }
    return false;
}

int main()
{
    int maze[N][N] = {{1,0,0,0},
                     {1,1,0,1},
                     {0,1,0,0},
                     {1,1,1,1}};


    solveMaze(maze);
    return 0;
}