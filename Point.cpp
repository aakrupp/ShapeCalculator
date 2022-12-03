/*****************************************************************************
 * File: Point.cpp
 * Author: Andrew Krupp
 * Class: COP 3003, Fall 2022
 * Desc: Shapes Calculator
 * Audit: 1.1.0: 11/22/22: Class creation
 ****************************************************************************/

#include "Point.h"

//Constructors
//------------------------------------------------------------------------
Point::Point(){
    x = 0;
    y = 0;
}

Point::Point(int x, int y){
    this->x = x;
    this->y = y;
}

//Accessors
//------------------------------------------------------------------------
void Point::setX(int xToSet){x = xToSet;}

void Point::setY(int yToSet){y = yToSet;}

int Point::getX(){return x;}

int Point::getY(){return y;}