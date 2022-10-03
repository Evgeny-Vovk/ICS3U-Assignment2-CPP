// Copyright(c) 2022 Evgeny Vovk All rights reserved.
//
// Created by : Evgeny Vovk
// Created on : October 2022
// ICS3U-Assignment2.cpp File, Octagon calculator in C++.

#include <iomanip>
#include <iostream>
#include <cmath>

int main() {
    // creating variables
    float side;
    float area;
    float perimeter;

    // input
    std::cout << "Input the side length of your octagon in centimeters: ";
    std::cin >> side;

    // process
    area = 2 * (1 + sqrt(2)) * pow(side , 2);
    perimeter = side * 8;

    // output
    std::cout << "\nThe area of the octagon is " << std::fixed
              << std::setprecision(2) << std::setfill('0')
              << area << " cm² ";
    std::cout << "with a perimeter of " << std::fixed << std::setprecision(2)
              << std::setfill('0') << perimeter << " cm.";

    std::cout << "\n\nDone.\n";
}
