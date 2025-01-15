#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //get name of the user
    char username[100];
    printf("Welcome to HotOrCold!\n");
    printf("Enter a user name: ");
    if (scanf("%99s", username) != 1) {
        printf("Error reading username\n");
        return 1;
    }
    
    //generating grid
    int GRID_SIZE;
    printf("Enter the size of GRID to generate: ");
    scanf("%d", &GRID_SIZE);            

    int grid[GRID_SIZE][GRID_SIZE];
    for(int x = 0; x < GRID_SIZE; x++) {
        for(int y = 0; y < GRID_SIZE; y++) {
            grid[x][y] = 0;
        }
    }
    
    //generating key cordinates
    srand(time(0));
    int key_x=rand()%GRID_SIZE;
    int key_y=rand()%GRID_SIZE;
    grid[key_x][key_y]=1;
    //showing the grid to user
    for(int x = 0; x < GRID_SIZE; x++) {
        for(int y = 0; y < GRID_SIZE; y++) {
            printf("%d ", grid[x][y]);
        }
        printf("\n");
    }
    printf("THe keycoordinates are: %d %d",key_x,key_y);
    return 0;

}