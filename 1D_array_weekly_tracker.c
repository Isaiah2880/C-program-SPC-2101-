/*
Name:Isaiah otieno 
Registration number :PA106/G/28801/25
Description:C Program to monitor revenue and room occupancy 
*/

#include <stdio.h>

int main() {
    float revenue[7];     // 1D array to store daily revenues for 7 days
    float total = 0, average;
    int i;

    printf("Hotel Weekly Revenue Tracker\n");
    printf("=============================\n");

    // Input revenue for each day
    for(i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        //Total  Weekly Revenue 
          total += revenue[i]; 
    }

    // Average daily revenue
    average = total / 7;

    // Display results
    printf("\nTotal Weekly Revenue: %.2f\n", total);
    printf("Average Daily Revenue: %.2f\n", average);

    return 0;
}