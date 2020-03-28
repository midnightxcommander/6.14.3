// 6.14.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <iomanip>

#include <stdio.h>     

#include <cmath>      





using namespace std;

using std::setw;

using std::setprecision;

using std::ios;

using std::endl;







int main()

{

    float row;

    double burger, result, length, Grill_size, feet; 

    int width, diameter;

    width = 18;

    diameter = 18;

    

    cout << "Input how many burgers you would like to cook at any time and I will calculate the size of grill needed:\n";

    cin >> burger;

    row = burger / 3;

    row = ceil(row);

    length = row * 6;

    Grill_size = length * width * diameter;

    cout << "Size of grill needed in cubic inches: \n";

    cout << Grill_size << "inches" << endl;

    feet = Grill_size / 12; 

    cout << "Size of grill needed in cubic feet: \n";

    cout << feet << "cubic feet" << endl;





    return 0;



}
