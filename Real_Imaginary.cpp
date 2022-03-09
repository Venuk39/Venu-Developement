// Real_Imaginary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Complex.h"
#include<crtdbg.h>

using namespace std;

int main()
{   
    int no_obj;
    cout << "Number of complex numbers you wanted to display : ";
    cin >> no_obj;
    Complex *obj = new Complex[no_obj];//Creation of array of objects
    for (int i = 0; i < no_obj; i++) //Entering real and imaginary parts
    {
        cout << "Complex number " << (i+1) << " is" << endl;
        obj[i].setReal();
        obj[i].setImag();
    }
    
    cout << "format is :" << endl;
    for (int i = 0; i < no_obj; i++) 
    {
        obj[i].display(obj[i].getReal(), obj[i].getImag(),i);
    }
    delete []obj;
    cout << "Memory Currently using is : " << _CrtDumpMemoryLeaks() << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
