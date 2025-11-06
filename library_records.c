/*
NAME:KRISTIAN ONYANGO
REG:PA106/G/28750/25
DESCRIPTION:LIBRARY RECORDS
*/

#include <stdio.h>

int main() {
    FILE *file;
    char title[200];
    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin);
    fputs(title, file);
    fclose(file);
    printf("Book title successfully stored.\n");
    return 0;
}
