#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("output.txt", "w");
    fprintf(file, "hello world!\n");
    fclose(file);
    return 0;
}
