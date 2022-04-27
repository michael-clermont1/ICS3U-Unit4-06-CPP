// Copyright (c) 2022 Michael Clermont All rights reserved
//
// Created by: Michael Clermont
// Created on: Feb 2022
// This program is for RGB colours

#include <iostream>

int main() {
    // this function shows the RGB values
    int loopCounter1 = 0;
    int loopCounter2 = 0;
    int loopCounter3 = 0;

    // process & output
    std::cout << "" << std::endl;
    for (int loopCounter1 = 0; loopCounter1 <= 255;
            loopCounter1++) {
            for (int loopCounter2 = 0; loopCounter2 <= 255;
            loopCounter2++) {
                for (int loopCounter3 = 0; loopCounter3 <= 255;
                loopCounter3++) {
                    std::cout << loopCounter1 << "," << loopCounter2 <<
                    "," << loopCounter3 << std::endl;
                }
            }
    }

    std::cout << "\nDone." << std::endl;
}
