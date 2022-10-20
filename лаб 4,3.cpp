// лаб 4,3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Lab_4.2.cpp
//Озірковського Дениса Леонідовича
//Лабораторна робота №4.2
/* Табуляція функції, заданої
формулою: функція з параметрами*/
//Варіант 11

#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    double x,F, a, b ,c, xp, xk, dx;

    cout << "xp-?";cin >> xp;
    cout << "xk-?";cin >> xk;
    cout << "dx-?";cin >> dx;
    cout << "a-?";cin >> a;
    cout << "b-?";cin >> b;
    cout << "c-?";cin >> c;
    
    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "F" << " |" << endl;
    cout << "---------------------------" << endl;
    x = xp;
    while (x <= xk)
    {
        if (x < 1 && c!=0)
            F = a * x * x + b / c;
        if (x < 1.5 && c==0)
            F = (x - a) / (x - c) / (x - c);
        else
           F= x * x / c / c;
       
        cout << "---------------------------" << endl;
        cout << "|" << setw(5) << "x" << " |"<<x
            << setw(7) << "F" << " |" << F << endl;
        cout << "---------------------------" << endl;
        x += dx;

    }

    
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
