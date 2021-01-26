// Task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    // Task 0
    /*
    cout << "Korona 4ao" << endl; 
    */


    // Task1 

    //double sideA_rectangle, sideB_rectangle;
    //cout << "Insert side A for rectangle "; cin >> sideA_rectangle;
    //cout << "Insert side B for rectangle "; cin >> sideB_rectangle;
    //double perimeter_rectangle = 2 * (sideA_rectangle + sideB_rectangle);
    //double area_rectangle = sideA_rectangle * sideB_rectangle;

    //double sideA_triangle, sideB_triangle, sideC_triangle;
    //cout << "Insert side A for triangle "; cin >> sideA_triangle;
    //cout << "Insert side B for triangle "; cin >> sideB_triangle;
    //cout << "Insert side C for triangle "; cin >> sideC_triangle;

    //double perimeter_triangle = sideA_triangle + sideB_triangle + sideC_triangle;
    //double half_perimeter_triangle = perimeter_triangle / 2;
    //double area_triangle = sqrt(half_perimeter_triangle * (half_perimeter_triangle - sideA_triangle) * (half_perimeter_triangle - sideB_triangle) * (half_perimeter_triangle - sideC_triangle));

    //cout << "P rectangle = " << perimeter_rectangle << endl << "A rectangle = " << area_rectangle << endl;
    //cout << "P triangle = " << perimeter_triangle <<  endl << "A triangle = " << ceil(area_triangle * 100.0) / 100.0 << endl;
    //

    double sideA_rectangle = 10;
    double sideB_rectangle = 3;
    double perimeter_rectangle = 2 * (10 + 3);
    double area_rectangle = 10 * 3;

    double sideA_triangle = 11;
    double sideB_triangle = 17;
    double sideC_triangle = 8;

    double perimeter_triangle = sideA_triangle + sideB_triangle + sideC_triangle;
    double half_perimeter_triangle = perimeter_triangle / 2;
    double area_triangle = sqrt(half_perimeter_triangle * (half_perimeter_triangle - sideA_triangle) * (half_perimeter_triangle - sideB_triangle) * (half_perimeter_triangle - sideC_triangle));

    std::cout << "P rectangle = " << perimeter_rectangle << std::endl << "A rectangle = " << area_rectangle << std::endl;
    std::cout << "P triangle = " << perimeter_triangle << std::endl << "A triangle = " << ceil(area_triangle * 100.0) / 100.0 << std::endl;




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
