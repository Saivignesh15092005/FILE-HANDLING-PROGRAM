#include <stdio.h>
#include <stdlib.h> // For exit()

int main() {
    FILE *fp;
    char text[] = "Hello, CODTECH intern!\n";

    // Open file in write mode
    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write to file
    fprintf(fp, "%s", text);
    printf("Text written to file successfully.\n");

    // Close file
    fclose(fp);

    // --- Add code for reading, appending, etc. ---

    return 0;
}
