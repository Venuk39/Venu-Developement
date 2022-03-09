#include<iostream>
#include"Complex.h"
int counter = 0;
using namespace std;
Complex::Complex() //definition of default constructor
{
	real = 0;
	imag = 0;
	counter++;
}
Complex::Complex(int real, int imag)//def of parameterized constructor
{
	this->real = real;
	(*this).imag = imag;
	counter++;
}
int Complex::getReal()const //returns real value to called object
{
	return this->real;
}
int Complex::getImag()const//returns imag value to called object
{
	return this->imag;
}
void Complex::setReal()//sets real value
{
	int real;
	cout << "Real : ";
	cin >> real;
	this->real = real;
}
void Complex::setImag()//sets imag value
{
	int imag;
	cout << "Imaginary : ";
	cin >> imag;
	this->imag = imag;
}
void Complex::display(int real, int imag,int i)const //display received number in complex format
{
	if(imag>=0)
		cout << "Complex Number " << (i+1) << " = " << real << "+i" << imag << endl;
	else
		cout << "Complex Number " << (i+1) << " = " << real << "-i" << (-1*imag) << endl;
}
void Complex::memory() //display number of objects created or number of times constructor called
{
	cout << "Number of objects created = " << counter << endl;
}