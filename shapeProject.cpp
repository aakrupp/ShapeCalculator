/*****************************************************************************
 * File: shapeProject.cpp
 * Author: Andrew Krupp
 * Class: COP 3003, Fall 2022
 * Desc: Shapes Calculator
 * Audit: 1.0.0: 11/22/22: Project creation
 *        1.0.1: 12/03/22: Pulled from remote repo, added functionality
 *        1.0.2: 12/03/22: Finished project. No found bugs. Full functionality
 *                         present.
 ****************************************************************************/

//includes
//----------------------------------------------------------------------------
#include <iostream>
#include <cmath>
#include <vector>
#include "Shape.h"
#include "Point.h"
#include "Line.h"
#include "Circle.h"
#include "Rectangle.h"
#define _USE_MATH_DEFINES

//constants and enums
//----------------------------------------------------------------------------
enum UserChoice {
    Line_ = 1,
    Rectangle_,
    Circle_,
    Print_,
    Exit_
};

//Function declarations
//----------------------------------------------------------------------------
Point askForPoint();
Line* createLine();
Circle* createCircle();
Rectangle* createRectangle();
void printShapes(std::vector<Shape*> shapes);
void deletePointers(std::vector<Shape*> &ptrVector);

//Function Definitions
//----------------------------------------------------------------------------
int main() {
    //main loop for creating and displaying shapes here
    int userInput;
    std::vector<Shape*> shapeVector;
    do{

        std::cout << "Enter number: \n1. Line \n2. Rectangle \n3. Circle \n4. Print \n5. Exit \n> ";
        try {
            std::cin >> userInput;
            throw exception;
        }
        switch(userInput){
            case Line_:
                shapeVector.push_back(createLine());
                break;
            case Rectangle_:
                shapeVector.push_back(createRectangle());
                break;
            case Circle_:
                shapeVector.push_back(createCircle());
                break;
            case Print_:
                printShapes(shapeVector);
                break;
            case Exit_:
                std::cout << "Exiting..." << std::endl;
                deletePointers(shapeVector);

        }
    }while(userInput != Exit_);
    return 0;
}

/**
 * Ask the user for input and create a point to return
 * @return an object of the Point class
 */
Point askForPoint(){
    Point p;
    int x, y;
    std::cout <<"Enter x then y (x space y enter): ";
    try {
        std::cin >> x >> y;
        throw exception;
    }
    p.setX(x);
    p.setY(y);
    std::cout << std::endl;
    return p;
}

/**
 * Create a pointer of a Line and return it to the calling function
 * @return a Line pointer
 */
Line* createLine(){
    std::cout << "Enter two points for the line: " << std::endl;
    Point p = askForPoint();
    Point p2 = askForPoint();
    Line *l = new Line(p, p2);
    return l;
}

/**
 * create a Circle and return a pointer to it to the calling function
 * @return a Circle Pointer
 */
Circle* createCircle(){
    std::cout << "Enter the center of the circle..." << std::endl;
    Point p = askForPoint();
    std::cout << "Enter the Radius: ";
    int r;
    try {
        std::cin >> r;
        throw exception;
    }
    std::cout << std::endl;
    Circle *c = new Circle(p, r);
    return c;
}

/**
 * create a Rectangle and return a pointer to it to the calling function
 * @return a Rectangle pointer
 */
Rectangle* createRectangle(){
    std::cout << "Enter the bottom left point of the Rectangle..." << std::endl;
    Point p = askForPoint();
    std::cout << "Enter Width then Height (width space height enter):";
    int w, h;
    try {
        std::cin >> w >> h;
        throw exception;
    }
    Rectangle *r = new Rectangle(p, h, w);
    return r;
}

/**
 * Print all shapes created to the user
 * @param shapes a vector of shape pointers
 */
void printShapes(std::vector<Shape*> shapes){
    std::cout << "Shapes..." << std::endl;
    for(int i = 0; i < size(shapes); i++){
        std::cout << shapes[i]->info() << std::endl;
    }
    std::cout << std::endl;
}

/**
 * delete all pointers from the heap to avoid a stack overflow
 * @param ptrVector a vector of pointers
 */
void deletePointers(std::vector<Shape*> &ptrVector){
    for(int i = 0; i < size(ptrVector); i++){
        delete ptrVector[i];
    }
}
