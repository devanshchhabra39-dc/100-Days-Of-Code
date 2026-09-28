Q99 Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>

int main() {
    // Input date string in dd/mm/yyyy format
    const char *input_date = "25/04/2026";
    char output_date[20];
    
    int day, month, year;

    // 1. Parse the day, month, and year from the input string
    if (sscanf(input_date, "%d/%d/%d", &day, &month, &year) == 3) {
        
        // Array containing abbreviated names for each month (1-indexed mapping)
        const char *months[] = {
            "", "Jan", "Feb", "Mar", "Apr", "May", "Jun", 
            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
        };

        // 2. Validate the month range to prevent array out-of-bounds errors
        if (month >= 1 && month <= 12) {
            // 3. Format the pieces into the target dd-MMM-yyyy layout
            sprintf(output_date, "%02d-%s-%04d", day, months[month], year);
            
            // Print the resulting string
            printf("Original Date: %s\n", input_date);
            printf("Formatted Date: %s\n", output_date);
        } else {
            printf("Error: Invalid month parsed.\n");
        }
    } else {
        printf("Error: Invalid date format input.\n");
    }

    return 0;
}
