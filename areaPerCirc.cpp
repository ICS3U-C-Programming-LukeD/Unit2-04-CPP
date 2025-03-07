// Copyright (c) 2025 Luke Di Bert All rights reserved.
//
// Created by: Luke Di Bert
// Date: March 7, 2025
// Calculates circumference and area of a circle

#include <cmath>
// adds math library
#include <iomanip>
// adds iomanip library for rounding
#include <iostream>
// adds iostream library
int main() {
    int radius;
    // creates a variable to store radius input
    std::cout << "Calculates area and circumference of a circle" << std::endl;
    // introduces program
    std::cout << "Enter radius: " << std::endl;
    // prompts user to give radius
    std::cin >> radius;
    // stores user input inside the radius variable
    float area = M_PI * pow(radius, 2);
    // calculates area
    float circumference = 2 * M_PI * radius;
    // calculates circumference
    std::cout << std::fixed << std::setprecision(2);
    // rounds the area and circumference to to 2 decimal places
    std::cout << "The area is: " << (area) << std::endl;
    // displays the area
    std::cout << "The circumference is: " << (circumference) << std::endl;
    // displays the circumference
}
