/* Hello.c
 * Escribimos un Hello world en un archivo de txt
 * Sebastian Opderbeck
 * 28-03-23
 */

#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("output.txt", "w");
    fprintf(file, "hello world!\n");
    fclose(file);
    return 0;
}
