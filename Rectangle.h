//
// Created by krupp on 11/29/2022.
//

#ifndef SHAPESCALCULATOR_RECTANGLE_H
#define SHAPESCALCULATOR_RECTANGLE_H

#endif //SHAPESCALCULATOR_RECTANGLE_H
/*****************************************************************************
 * File: Rectangle.h
 * Author: Andrew Krupp
 * Class: COP 3003, Fall 2022
 * Desc: Shapes Calculator
 * Audit: 1.3.0: 11/22/22: Class creation
 ****************************************************************************/


#include "Shape.h"
//HEADER GUARD
#ifndef SHAPES_RECTANGLE_H
#define SHAPES_RECTANGLE_H

class Rectangle : public Shape{
private:
    Point point;
    int height;
    int width;

public:
    //Constructors
    //------------------------------------------------------------------------
    Rectangle();
    Rectangle(int x, int y, int height, int width);

    //Accessors
    //------------------------------------------------------------------------
    void setPoint(int x, int y);

    void setHeight(int heightToSet);

    void setWidth(int widthToSet);

    Point getPoint();

    int getWidth();

    int getHeight();

    //Methods
//------------------------------------------------------------------------
    std::string info();

};
#endif //SHAPES_RECTANGLE_H
