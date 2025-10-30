/*
Name: Simon Mutisya Muthama 
Reg No:CT100/G/26227/25
Date:30/10/2025
Descriptio: Revenue and room occupancy monitor 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // -------------------------------
    // 1D Array: Weekly Revenue Tracker
    // -------------------------------
    float revenue[7];
    float totalRevenue = 0, averageRevenue;

    printf("\tWeekly Revenue Tracker\n");
    for (int i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        totalRevenue += revenue[i];
    }

    averageRevenue = totalRevenue / 7.0;

    printf("\nTotal Weekly Revenue: %.2f\n", totalRevenue);
    printf("Average Daily Revenue: %.2f\n\n", averageRevenue);


    // 2D Array: Room Occupancy (1 branch)
    
    int occupancy[5][10];
    int occupied, vacant;

    srand(time(0));  // for random numbers

    printf("\tRoom Occupancy (One Branch)\n");
    for (int floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;
        for (int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // 0 = vacant, 1 = occupied
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d: Occupied = %d, Vacant = %d\n", floor + 1, occupied, vacant);
    }

    printf("\n");


    // 3D Array: Multiple Branches
    
    int chain[3][5][10];
    int totalOccupied = 0;

    printf("Multiple Branches Occupancy\n");
    for (int branch = 0; branch < 3; branch++) {
        int branchOccupied = 0;
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; // random 0 or 1
                if (chain[branch][floor][room] == 1)
                    branchOccupied++;
            }
        }
        totalOccupied += branchOccupied;
        printf("Branch %d: Total Occupied Rooms = %d\n", branch + 1, branchOccupied);
    }

    printf("Total Occupied Rooms Across All Branches: %d\n", totalOccupied);

    return 0;
}