Q124 Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source_file, *dest_file;
    char source_path[100], dest_path[100];
    int ch; // Must be int to correctly catch EOF

    // 1. Get filenames from the user
    printf("Enter the source filename: ");
    scanf("%99s", source_path);

    printf("Enter the destination filename: ");
    scanf("%99s", dest_path);

    // 2. Open source file in read mode
    source_file = fopen(source_path, "r");
    if (source_file == NULL) {
        printf("Error: Cannot open source file %s\n", source_path);
        return 1; 
    }

    // 3. Open destination file in write mode
    dest_file = fopen(dest_path, "w");
    if (dest_file == NULL) {
        printf("Error: Cannot open or create destination file %s\n", dest_path);
        fclose(source_file); // Clean up open resources before exiting
        return 1;
    }

    // 4. Copy content character by character
    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, dest_file);
    }

    printf("File copied successfully from %s to %s.\n", source_path, dest_path);

    // 5. Close both files to flush buffers and free memory
    fclose(source_file);
    fclose(dest_file);

    return 0;
}
