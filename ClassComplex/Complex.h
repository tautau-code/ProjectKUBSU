#pragma once
#include <string>
class Complex
{
public:
	Complex(double real = 5., double imaginary = 3.);
	Complex addition(Complex first, Complex second);
	Complex subtraction(Complex first, Complex second);
	void print();
	double getReal();
	double getImaginary();
	void setReal(double real);
	void setImaginary(double imaginary);
private:
	double realPart;
	double imaginaryPart;
};

