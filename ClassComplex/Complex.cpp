#include "Complex.h"
#include <iostream>

Complex::Complex(double real, double imaginary)
{
	realPart = real;

	imaginaryPart = imaginary;
}

Complex Complex::addition(Complex first, Complex second)
{
	return Complex((first.realPart) + (second.realPart),
					(first.imaginaryPart) + (second.imaginaryPart));
}

Complex Complex::subtraction(Complex first, Complex second)
{
	return Complex((first.realPart - second.realPart),
					(first.imaginaryPart - second.imaginaryPart));
}

void Complex::print()
{
	std::cout << "(" << this->realPart << ", " << this->imaginaryPart << ")";
}

double Complex::getReal()
{
	return realPart;
}

double Complex::getImaginary()
{
	return imaginaryPart;
}

void Complex::setReal(double real)
{
	realPart = real;
}

void Complex::setImaginary(double imaginary)
{
	imaginaryPart = imaginary;
}
