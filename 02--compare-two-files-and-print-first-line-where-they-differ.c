#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int i;

int main() {

    FILE *p_file1 = fopen("file1.txt", "r");
    FILE *p_file2 = fopen("file2.txt", "r");
    char buffer1[25] = {0};
    char buffer2[25] = {0};

    if (p_file1 == NULL) {
        printf("Error opening file1\n");
        return(1);
    }
    if (p_file2 == NULL) {
        printf("Error opening file2\n");
        return(1);
    }

    while (fgets(buffer1, 25, p_file1) != fgets(buffer2, 25, p_file2)) {
        buffer1[i++];
        buffer2[i++];

        if (buffer1[i] != buffer2[i]) {

            printf("file1 mismatched with a %c", buffer1[i]);
            printf("\nfile2 mismatched with a %c", buffer2[i]);

        }
    }
}
