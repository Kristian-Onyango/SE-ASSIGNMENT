/*
NAME:KRISTIAN ONYANGO
REG:PA106/G/28750/25
DESCRIPTION: RETAIL SHOP RECORDS
*/

#include <stdio.h>

int main() {
    FILE *file;
    float amount, total = 0;
    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }
    fclose(file);
    printf("Total sales for the day: %.2f\n", total);
    return 0;
}
