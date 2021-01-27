// Task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
// For task5
#include <iomanip>

using namespace std;

int main()
{
    // Task 0
    /*
    cout << "Korona 4ao" << endl; 
    */


    // Task1 
    /*
    double sideA_rectangle, sideB_rectangle;
    cout << "Insert side A for rectangle "; cin >> sideA_rectangle;
    cout << "Insert side B for rectangle "; cin >> sideB_rectangle;
    double perimeter_rectangle = 2 * (sideA_rectangle + sideB_rectangle);
    double area_rectangle = sideA_rectangle * sideB_rectangle;

    double sideA_triangle, sideB_triangle, sideC_triangle;
    cout << "Insert side A for triangle "; cin >> sideA_triangle;
    cout << "Insert side B for triangle "; cin >> sideB_triangle;
    cout << "Insert side C for triangle "; cin >> sideC_triangle;

    double perimeter_triangle = sideA_triangle + sideB_triangle + sideC_triangle;
    double half_perimeter_triangle = perimeter_triangle / 2;
    double area_triangle = sqrt(half_perimeter_triangle * (half_perimeter_triangle - sideA_triangle) * (half_perimeter_triangle - sideB_triangle) * (half_perimeter_triangle - sideC_triangle));

    cout << "P rectangle = " << perimeter_rectangle << endl << "A rectangle = " << area_rectangle << endl;
    cout << "P triangle = " << perimeter_triangle <<  endl << "A triangle = " << ceil(area_triangle * 100.0) / 100.0 << endl;
    */


    // Task2
    /*
    int num1, num2;
    cout << "Insert two digits that are going to be swapped." << endl << "Enter the first digit: ";
    cin >> num1;
    cout << "Enter the second digit: ";
    cin >> num2;
    // var1
    //num1 += num2;
    //num2 = num1 - num2;
    //num1 = num1 - num2;
 
    // var2
    int tmp;
    tmp = num1;
    num1 = num2;
    num2 = tmp;

    cout << "Swapped numbers - the first digit now is: " << num1 << " and the second gidit is: " << num2 << endl;
    */


    // Task3
    /*
    int number;
    cout << "Insert three digits number: ";
    cin >> number;
    int digit1, digit2, digit3;
    digit3 = number % 10;
    digit2 = (number / 10) % 10;
    digit1 = number / 100;

    cout << "The number " << number << " contains the following digits: " << digit1 << " " << digit2 << " " << 
        digit3 << " and their sum is " << digit1 + digit2 + digit3 << endl;
     */


    // Task4
    /*
    int turtles, cats;
    cout << "Enter number of turtles: ";
    cin >> turtles;
    cout << "Enter number of cats: ";
    cin >> cats;

    double turtlesFood = turtles * 2.5;
    int catsFood = cats * 4;
    double allFood = turtlesFood + catsFood;

    cout << "You will need " << allFood << " lv." << endl;
    */


    // Task5
    /*
    double num;
    cout << "Enter a number: ";
    cin >> num;
    double toFahrenheit = num * 1.8 + 32.00;
    double toCelsius = (num - 32.00) / 1.8;
    cout << "From C to F -> " << fixed << setprecision(2) << toFahrenheit << " F and from F to C -> " << toCelsius << " C" << endl;
    */


    // Task6
 
    double x;
    cin >> x;
    double head = x * x * x;
    double body = x * (x / 2) * (2 * x);
    double legs = 2 * (x * (x / 2) * (3 * x / 4));
    double totalVolume = head + body + legs;

    cout << totalVolume << endl;


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
