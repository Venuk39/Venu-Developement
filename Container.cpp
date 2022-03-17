// Container.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<vector>
#include<array>
#include<string>
#include <iostream>
using namespace std;

int main()
{
    array<string, 4> arr;
    vector<string> vec;
    string s;
    //vec.push_back("ABC");
    cout << "Array Size = " << size(arr) << endl;
    cout << "Vector Size = " << size(vec) << endl;
    cout << "Enter Array Input strings" << endl;
    for (int i = 0; i < size(arr); ++i)
    {
        getline(cin, arr[i]);
    }
   // cout << size(vec) << endl;
    cout << "Enter Vector Input strings" << endl;
    for (int i=0;i<5;i++)
    {
        //getline(cin, vec.at(i));
        getline(cin, s);
        vec.push_back(s);
    }
    cout << "*********************************************************" << endl;
    cout << "Array Contents are" << endl;
    for (int i = 0; i < size(arr); ++i)
    {
        cout << (i + 1) << " is " << arr[i] << endl;
    }
    cout << size(vec) << endl;
    cout << "*********************************************************" << endl;
    cout << "Vector contents are" << endl;
    for (auto &i : vec)
    {
        cout << i << endl;
    }
   /* for (vector<string>::iterator i = vec.begin(); i != vec.end(); ++i)
    {
        cout << *i << endl;
    }*/
    cout << "Array Size = " << size(arr) << endl;
    cout << "Vector Size = " << size(vec) << endl;

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
