/*
NAME: ISAIAH OTIENO
REGISTRATION NUMBER: PA106/G/28801/25
DESCRIPTION: C program that allows continuous entry of student details,
stores them in a binary file, and displays all saved records.
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char reg_no[30];
    int total_marks;
};

int main(void) {
    struct Student s;
    FILE *fp;
    char choice;

    // --- Step 1: Open file in append mode ---
    fp = fopen("results.dat", "ab");
    if (fp == NULL) {
        perror("Error opening results.dat");
        return 1;
    }

    printf("Enter student details (press 'n' to stop)\n");

    // --- Step 2: Infinite loop for continuous data entry ---
    while (1) {
        printf("\nEnter student name: ");
        fgets(s.name, sizeof(s.name), stdin);

        printf("Enter registration number: ");
        fgets(s.reg_no, sizeof(s.reg_no), stdin);

        printf("Enter total marks: ");
        scanf("%d", &s.total_marks);
        getchar(); // clear newline after integer input

        // Write record to file
        fwrite(&s, sizeof(struct Student), 1, fp);

        printf("Record saved successfully!\n");

        // Ask if the user wants to continue
        printf("Do you want to enter another record? (y/n): ");
        scanf(" %c", &choice);
        getchar(); // clear newline

        if (choice == 'n' || choice == 'N')
            break; // Exit loop if user chooses 'n'
    }

    fclose(fp);
    printf("\nAll records have been saved to results.dat.\n");

    // --- Step 3: Display all records ---
    fp = fopen("results.dat", "rb");
    if (fp == NULL) {
        perror("Error reading results.dat");
        return 1;
    }

    printf("\nSTUDENT RECORDS\n");
    printf("-------------------------------\n");

    int i = 1;
    while (fread(&s, sizeof(struct Student), 1, fp)) {
        printf("Student %d\n", i++);
        printf("Name: %s", s.name);
        printf("Registration No: %s", s.reg_no);
        printf("Total Marks: %d\n", s.total_marks);
        printf("-------------------------------\n");
    }

    fclose(fp);
    return 0;
}