#include <stdio.h>

typedef int bool;

#define true 1
#define false 0

void askValues(int* lower, int* upper, int* step) {
    printf("Ingrese el valor inicial: ");
    scanf("%d", lower);

    printf("Ingrese el valor final: ");
    scanf("%d", upper);

    printf("Ingrese el paso: ");
    scanf("%d", step);
}

void headerTable(char* degreeToConvert, char* conversionDegree) {
    printf("\nTabla de conversión %s a %s\n", degreeToConvert, conversionDegree);
    printf("---------------------------------------\n");
    printf(" %s \t\t %s\n", degreeToConvert, conversionDegree);
    printf("---------------------------------------\n");
}

float conversionFormula(float degree, bool isFahrenheitToCelsius) {
    if (isFahrenheitToCelsius) return (degree - 32) * 5.0 / 9.0;
    return (degree * 9.0 / 5.0) + 32.0;
}

void conversionTable(int lower, int upper, int step, bool isFahrenheitToCelsius) {
    float degreeToConvert, conversionDegree;
    for (degreeToConvert = lower; degreeToConvert <= upper; degreeToConvert += step) {
        conversionDegree = conversionFormula(degreeToConvert, isFahrenheitToCelsius);
        printf(" %.2f \t\t %.2f\n", degreeToConvert, conversionDegree);
    }
}

int main() {
    int lower, upper, step;

    askValues(&lower, &upper, &step);
    headerTable("Fahrenheit", "Celsius");
    conversionTable(lower, upper, step, true);

    //askValues(&lower, &upper, &step);
    headerTable("Celsius", "Fahrenheit");
    conversionTable(lower, upper, step, false);

    return 0;
}