#include <stdio.h>
#include <string.h>

void STTFFF() {
    char src_path[1024], dest_path[1024];
    char buffer[1024];

    printf("Source file: ");
    fgets(src_path, sizeof(src_path), stdin);
    src_path[strcspn(src_path, "\n")] = 0;

    printf("Destination file: ");
    fgets(dest_path, sizeof(dest_path), stdin);
    dest_path[strcspn(dest_path, "\n")] = 0;

    FILE *src = fopen(src_path, "r");
    FILE *dest = fopen(dest_path, "w");

    if (src && dest) {
        while (fgets(buffer, sizeof(buffer), src)) {
            fputs(buffer, dest);
        }
        printf("Transfer complete.\n");
    } else {
        perror("Error");
    }

    if (src) fclose(src);
    if (dest) fclose(dest);
}