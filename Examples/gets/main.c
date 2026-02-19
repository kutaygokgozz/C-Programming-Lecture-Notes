#include <stdio.h>
#include <stdlib.h>



int main() {
    int ch;


    printf("Karakter girin (EOF icin Ctrl+Z veya Ctrl+D):\n");

    while ((ch = getchar()) != EOF) {
        putchar(ch);
    }

    printf("\nEOF algilandi, program bitti.\n");
    return 0;


}
