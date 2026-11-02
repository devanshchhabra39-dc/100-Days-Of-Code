Q130 Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.


#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME 50

// Define the structure for student records
struct Student {
    char name[MAX_NAME];
    int roll_no;
    float marks;
};

int main() {
    int n, i;
    FILE *file;

    printf("Enter the number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of students.\n");
        return 1;
    }

    struct Student students[n];

    // 1. Get input from the user
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name (single word): ");
        scanf("%49s", students[i].name); // Limits character length to prevent buffer overflow
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // 2. Store records into the file using fprintf()
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        // Space-separated values on a single line format
        fprintf(file, "%s %d %.2f\n", students[i].name, students[i].roll_no, students[i].marks);
    }
    fclose(file);
    printf("\nData successfully saved to students.txt\n");

    // 3. Read records from the file using fscanf() and display them
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\n--- Reading Data from File ---\n");
    printf("%-20s %-12s %-5s\n", "Name", "Roll No", "Marks");
    printf("-----------------------------------------\n");

    char temp_name[MAX_NAME];
    int temp_roll;
    float temp_marks;

    // Loop continues until fscanf reaches the End Of File (EOF)
    while (fscanf(file, "%49s %d %f", temp_name, &temp_roll, &temp_marks) == 3) {
        printf("%-20s %-12d %-5.2f\n", temp_name, temp_roll, temp_marks);
    }

    fclose(file);
    return 0;
}
