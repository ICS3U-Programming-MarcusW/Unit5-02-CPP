// Copyright (c) 2022 Marcus Wehbi All rights reserved.
//
// Created by: Marcus Wehbi
// Created on: Nov 24 2022
// This program calculates the area of a triangle using several functions

#include <iomanip>
#include <iostream>

// this function calculates the area of a triangle
void CalcArea(float base, float height) {
    // declares a variable for area as a float
    float area;

    // formula to calculate the area of a triangle
    area = (base * height) / 2;

    // displays the area to the user
    std::cout << "The area of the triangle is " << std::fixed;
    std::cout << std::setprecision(2) << area << "cm^2" << std::endl;
}

// this function checks for any invalid inputs and gets input
int main() {
    // declares string variable
    // declare float variables to convert to
    std::string baseFromUserString, heightFromUserString;
    float baseFromUserFloat, heightFromUserFloat;

    // gets base and height from the user
    std::cout << "Enter the base (cm): ";
    std::cin >> baseFromUserString;
    std::cout << "Enter the height (cm): ";
    std::cin >> heightFromUserString;
    std::cout << std::endl;

    // checks if the user has entered a valid number
    try {
        // convert the user's input to a float
        baseFromUserFloat = std::stof(baseFromUserString);
        heightFromUserFloat = std::stof(heightFromUserString);

        // checks if numbers are greater than 0
        if (baseFromUserFloat > 0 && heightFromUserFloat > 0) {
            CalcArea(baseFromUserFloat, heightFromUserFloat);
        } else {
            std::cout << "The base and height must be greater than 0.";
        }
        // determines if the input is valid
    } catch (std::invalid_argument) {
        // tells user did the input is not a number
        std::cout << "Invalid data entered! Only numbers can be accepted!\n";
    }
}
