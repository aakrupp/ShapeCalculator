/*****************************************************************************
 * File: Rectangle.cpp
 * Author: Andrew Krupp
 * Class: COP 3003, Fall 2022
 * Desc: Shapes Calculator
 * Audit: 1.3.0: 11/22/22: Class creation
 ****************************************************************************/

#include "Rectangle.h"

//Constructors
//------------------------------------------------------------------------
Rectangle::Rectangle(){
    point = Point(0,0);
    height = 0;
    width = 0;
}

Rectangle::Rectangle(int x, int y, int height, int width){
    point = Point(x,y);
    this->height = height;
    this->width = width;
}

//Accessors
//------------------------------------------------------------------------
void Rectangle::setPoint(int x, int y){point = Point(x, y);}

void Rectangle::setHeight(int heightToSet){height = heightToSet;}

void Rectangle::setWidth(int widthToSet){width = widthToSet;}

Point Rectangle::getPoint(){return point;}

int Rectangle::getWidth(){return width;}

int Rectangle::getHeight(){return height;}

//------------------------------------------------------------------------
std::string info(){
    return ""; //*******EDIT LATER********
}