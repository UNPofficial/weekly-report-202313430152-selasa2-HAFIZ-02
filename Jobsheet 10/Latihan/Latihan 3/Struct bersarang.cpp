//Created by 23343067_Hafiz Hafrienda

#include <stdio.h>

struct complex
{
	int imag;
	float real;
};

struct number
{
	struct complex comp;
	int integers;
} num1, num2;

num1.integers = 12;
num1.comp.real = 44.12;
num2.comp.imag = 11;