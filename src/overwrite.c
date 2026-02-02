#include <string.h>
#include <stdio.h>

void OverWrite() {
    char file_to_overwrite[2048];

    printf("File/Path To OverWrite: ");

    if (fgets(file_to_overwrite, sizeof(file_to_overwrite), stdin)) {
        file_to_overwrite[strcspn(file_to_overwrite, "\n")] = 0;
    }

    FILE *file = fopen(file_to_overwrite, "w");

    if (file == NULL) {
        perror("fopen");
        return; 
    }

    fclose(file);

    printf("Done!\n");

    /* return; i forgot for that */
}
