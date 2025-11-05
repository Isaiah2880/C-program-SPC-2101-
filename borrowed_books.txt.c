/*
NAME:ISAIAH OTIENO 
REGISTRATION NUMBER:PA106/G/28801/25
DESCRIPTION:C Program to enter and store borrowed book titles in borrowed_books.txt without deleting previous records.
*/
#include <stdio.h>
#include <string.h>

int main(void) {
    char title[200];
    FILE *fp = fopen("borrowed_books.txt", "a"); 
    if (fp == NULL) {
        perror("Error opening borrowed_books.txt");
        return 1;
    }

    printf("Enter book title to store (empty line to quit):\n");

    while (1) {
        // prompt
        printf("> ");
        if (fgets(title, sizeof(title), stdin) == NULL) {
            // EOF or read error
            break;
        }

        // remove trailing newline
        size_t len = strlen(title);
        if (len == 0) break;
        if (title[len - 1] == '\n') {
            title[len - 1] = '\0';
            --len;
        }

        // empty line signals quit
        if (len == 0) break;

        // write title to file followed by newline
        if (fprintf(fp, "%s\n", title) < 0) {
            perror("Error writing to file");
            fclose(fp);
            return 1;
        }

        fflush(fp); // ensure it's saved immediately
        printf("Title saved successfully.\n");
    }

    fclose(fp);
    printf("Exiting. File closed.\n");
    return 0;
}