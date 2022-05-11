#include <stdio.h>

#define IN  TRUE
#define OUT FALSE

long countChar() {
    long count = 0;
    while (getchar() != EOF) 
        ++count;
    return count;
}

long countLine() {
    long count = 0;
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\n') ++count;
    }
    return count;
}

int main() {
    // printf("countChar = %ld\n", countChar());
    printf("countLine = %ld\n", countLine());
    return 0;
}