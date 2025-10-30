/*
Name:ISAIAH OTIENO 
Registration number:PA106/G/28801/25
C Program for 2D array room occupancy (one branch)
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];
    int floor, room;
    int occupied, vacant;

    srand(time(0)); // for random numbers

    printf("Room Occupancy (One Branch)\n");

    // Random occupancy (0 or 1)
    for (floor = 0; floor < 5; floor++) {
        for (room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2;
        }
    }
    // Occupied and vacant rooms per floor
    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;
        
        
        for (room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d: Occupied = %d, Vacant = %d\n", floor + 1, occupied, vacant);
    }



    return 0;
}