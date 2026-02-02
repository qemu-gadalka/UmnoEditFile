#include <stdio.h>
#include <string.h>

void OverWrite(); 
void STTFFF();

int main() {
    char choise[10];

    printf("[1] - OverWrite\n[2] - Set Text to File From File\n");

    while (1) {
        printf("\n> ");
        
        if (fgets(choise, sizeof(choise), stdin)) {
            choise[strcspn(choise, "\n")] = 0;
        }

        if (strcmp(choise, "1") == 0) {
            OverWrite();
        }
            
        else if (strcmp(choise, "2") == 0) {
            STTFFF();
        }
            
        else {
            printf("Unknown Command: %s\n", choise);
        }
    }

    return 0;

}

