#include <assert.h>
#include "Conversion.h"

int main() {
    int fahrenheitTable[] = {-40, -22, -4, 14, 32, 50, 68, 86, 104, 122, 140, 158, 176, 194, 212};
    int step = 0;
    for (float degreeToConvert = -40; degreeToConvert <= 100; degreeToConvert += 10) {
        assert(conversionFormula(degreeToConvert, 1) == fahrenheitTable[step]);
        assert(conversionFormula(fahrenheitTable[step], 0) == degreeToConvert);
        step++;
    }
}