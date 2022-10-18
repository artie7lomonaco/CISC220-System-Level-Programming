#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define ALPH_LEN 26
int caeser(int chr, int rotateStr) {
    const char alph[2*ALPH_LEN] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
    if (islower(chr)) {
        return alph[chr-'a'+rotateStr];
    } else {
        return chr;
    }
}
int main(int argc, char *argv[]) {
    if (argc < 2) {
        puts("Usage: encrypt shift str\n");
        return 0;
    }
    int rotatorN = atoi(argv[1]) % ALPH_LEN;
    for (int ch = getchar(); ch != EOF; ch = getchar()) {
            putchar(caeser(ch, rotatorN));
    }
    putchar('\n');
    printf("\n");
}