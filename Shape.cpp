/*****************************************************************************
 * File: Shape.cpp
 * Author: Andrew Krupp
 * Class: COP 3003, Fall 2022
 * Desc: Shapes Calculator
 * Audit: 1.2.0: 11/22/22: Class creation
 *        1.1.1: 12/03/22: Class editing, bug fixes with private properties
 ****************************************************************************/

#include "Shape.h"

//Constructors
//------------------------------------------------------------------------
Shape::Shape(){
    point = Point(0, 0);
}

//Accessors
//------------------------------------------------------------------------
void Shape::setPoint(int x, int y){point = Point(x, y);}
Point Shape::getPoint(){return point;}

//Methods
//------------------------------------------------------------------------
/**
 * virtual method to be polymorphed later so there is no slicing in child classes
 * @return a string
 */
std::string Shape::info(){return "";}