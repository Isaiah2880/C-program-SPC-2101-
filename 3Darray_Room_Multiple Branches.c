/*
Name:ISAIAH OTIENO 
REGISTRATION NUMBER:PA106/G/28801/25
DESCRIPTION: C Program for 3D Array _Multiple Branches hotel management 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int branch, floor, room;
    int totalOccupied = 0;

    srand(time(0));//initializaton of random number generator with the current time 

    printf("Room Occupancy _Multiple Branches \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        // Assign random occupancy (0 or 1)
    for (branch = 0; branch < 3; branch++) {
    for (floor = 0; floor < 5; floor++) {
    for (room = 0; room < 10; room++) {
    chain[branch][floor][room] = rand() % 2;
    if (chain[branch][floor][room] == 1)
                    totalOccupied++;
    }
    }
    }

    printf("Total Occupied Rooms Across All Branches: %d\n", totalOccupied);

    return 0;
    }
