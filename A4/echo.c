#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        printf("%s", argv[i]);
        if (i < argc - 1){
            printf(" ");
        }
    }
    printf("\n");
}