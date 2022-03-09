#pragma once
class Complex {
private: int real;
	     int imag;
		 static int count;
public:  Complex();//default Constructor
	     Complex(int, int);//parameterized Constructor
		 int getReal()const;//returns real
		 int getImag()const;//returns imag
		 void setReal();//accepts real
		 void setImag();//accepts integer
		 void display(int,int,int)const;//displaying in complex format
		 static void memory();//static member function
};
extern int counter;