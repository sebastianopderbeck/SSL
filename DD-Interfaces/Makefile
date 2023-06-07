main: Conversion.o
	gcc main.c Conversion.o - o main

Conversion.o: Conversion.c
	gcc -c Conversion.c -o Conversion.o

conversionTest: Conversion.o
	gcc ConversionTest.c Conversion.o -o ConversionTest

tests: conversionTest
	./ConversionTest