#include <stdio.h>

void func1() {
    int c;
    while ((c = getchar()) != EOF) 
        putchar(c);
}

void printEOF() {
    printf("EOF = %ld", EOF);
}

int main() {
    int c;  // large enough to hold EOF

    if (getchar() != EOF)
        printf("getchar() != EOF is TRUE\n");
    else
        printf("getchar() != EOF is FALSE\n");
    
    printEOF();
    func1();

    // c = getchar();
    // while (c != EOF) {
    //     putchar(c);
    //     c = getchar();
    // }

    return 0;
}