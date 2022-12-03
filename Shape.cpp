/*****************************************************************************
 * File: Shape.cpp
 * Author: Andrew Krupp
 * Class: COP 3003, Fall 2022
 * Desc: Shapes Calculator
 * Audit: 1.2.0: 11/22/22: Class creation
 ****************************************************************************/

#include "Shape.h"

//Constructors
//------------------------------------------------------------------------
Shape::Shape(){

}

//Accessors
//------------------------------------------------------------------------
void Shape::setPoint(int x, int y){point = Point(x, y);}
Point Shape::getPoint(){return point;}

//Methods
//------------------------------------------------------------------------
std::string Shape::info(){return "";}