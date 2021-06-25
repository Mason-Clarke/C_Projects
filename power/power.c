#include <stdio.h>
#include <stdlib.h>
#include "power.h"

void powerRule1(int first, int second) 
{
	int firstCoeff = first;
	int secondCoeff = second;
	printf("%d\n", firstCoeff);
}

void powerRule2(int first, int second, int third)
{
	int firstCoeff = first * 2;
	int secondCoeff = second;
	printf("%dx + %d\n", firstCoeff, secondCoeff);
}

void powerRule3(int first, int second, int third, int fourth)
{
	int firstCoeff = first * 3;
	int secondCoeff = second * 2;
	int thirdCoeff = third;
	printf("%dx^2 + %dx + %d\n", firstCoeff, secondCoeff, thirdCoeff);
}

void powerRule4(int first, int second, int third, int fourth, int fifth)
{
	int firstCoeff = first * 4; 
	int secondCoeff = second * 3;
	int thirdCoeff = third * 2;
	int fourthCoeff = fourth;
	printf("%dx^3 + %dx^2 + %dx + %d\n", firstCoeff, secondCoeff, thirdCoeff, fourthCoeff);
}
