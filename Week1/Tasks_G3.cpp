// Week01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>


using namespace std;

int main()
{
    // Task1
    /*
    cout << "Enter your name: ";
    char name[100];
    cin.getline(name, 100);
    cout << "Hello, I`m " << name << endl;
    */


    // Task2
    /*
    double eur;
    cout << "Enter euros to convert to leva: ";
    cin >> eur;

    double bgn = eur * 1.95583;
    cout << eur << " EUR are " << bgn << " BGN" << endl;
    */


    // Task3
    /*
    int a , b, c; 
    cin >> a >> b >> c;
    // a = 12, b =7, c = 9;
    int volume = a * b * c;
    cout << volume << endl;
    */
    

    // Task4
    /*
    double initialCapital, percentage;
    int months;
    cout << "Enter initial capital, interest rate and time frame in months (each separated by sapce): ";
    cin >> initialCapital >> percentage >> months;

    double percentageMonthly = (percentage / 12) / 100;
    double totalSum = initialCapital  + (initialCapital * (percentageMonthly * months));
    cout << "The final sum will be: " << totalSum << endl;
    */


    // Task5
    /*
    int number;
    cout << "Enter four digits number: ";
    cin >> number;

    int num1, num2, num3, num4;
    num4 = number % 10;
    num3 = (number / 10) % 10;
    num2 = (number / 100) % 10;
    num1 = number / 1000;

    cout << "Inverted numer is: " << num4 << num3 << num2 << num1 << endl;
    */


    // Task6

    int numA, numB;
    cout << "Enter number one: ";
    cin >> numA;
    cout << "ENter number two: ";
    cin >> numB;
    bool equal = true;
    if (numA ^ numB)
        equal = false;

    std::cout << std::boolalpha << equal << endl;




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
