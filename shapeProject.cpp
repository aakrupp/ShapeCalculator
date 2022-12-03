/*****************************************************************************
 * File: shapeProject.cpp
 * Author: Andrew Krupp
 * Class: COP 3003, Fall 2022
 * Desc: Shapes Calculator
 * Audit: 1.0.0: 11/22/22: Project creation
 *        1.0.1: 12/03/22: Pulled from remote repo, added functionality
 ****************************************************************************/

#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
enum UserChoice {
    Line = 1,
    Rectangle,
    Circle,
    Print,
    Exit
};
int main() {
    //main loop for creating and displaying shapes here
    char userInput;
    do{

        std::cout << "Enter number: \n1. Line \n2. Rectangle \n3. Circle \n4. Print \n5. Exit \n> ";
        std::cin >> userInput;

    }while(userInput != Exit);
    return 0;
}