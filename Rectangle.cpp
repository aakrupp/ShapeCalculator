/*****************************************************************************
 * File: Rectangle.cpp
 * Author: Andrew Krupp
 * Class: COP 3003, Fall 2022
 * Desc: Shapes Calculator
 * Audit: 1.3.0: 11/22/22: Class creation
 ****************************************************************************/

#include "Rectangle.h"
#define _USE_MATH_DEFINES

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

void Rectangle::setHeight(int heightToSet){height = heightToSet;}

void Rectangle::setWidth(int widthToSet){width = widthToSet;}

int Rectangle::getWidth(){return width;}

int Rectangle::getHeight(){return height;}

//------------------------------------------------------------------------
std::string Rectangle::info(){
    return ""; //*******EDIT LATER********
}