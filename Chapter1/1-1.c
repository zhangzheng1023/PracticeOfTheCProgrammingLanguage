#include <stdio.h>

void func() {
    printf("hello, ");
    printf("world");
    printf("\n");
}

int main() {
    func();
    printf("hello, world\n");  // \n newline
    printf("test\\b--\btest \n");  // \b delete one char
    printf("test\\t--te\tst \n");  // \t tab
    return 0;
}