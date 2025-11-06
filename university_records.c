/*
NAME:KRISTIAN ONYANGO
REG:PA106/G/28750/25
DESCRIPTION:UNIVERSITY STUDENTS RECORDS
*/

#include <stdio.h>

struct Student {
    char name[50];
    char reg_no[20];
    float marks;
};

int main() {
    FILE *file;
    struct Student s;
    file = fopen("results.dat", "rb");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    while (fread(&s, sizeof(struct Student), 1, file) == 1) {
        printf("Name: %s\nMarks: %.2f\n\n", s.name, s.marks);
    }
    fclose(file);
    return 0;
}
