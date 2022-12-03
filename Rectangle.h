/*****************************************************************************
 * File: Rectangle.h
 * Author: Andrew Krupp
 * Class: COP 3003, Fall 2022
 * Desc: Shapes Calculator
 * Audit: 1.3.0: 11/22/22: Class creation
 ****************************************************************************/

#include "Shape.h"

#ifndef SHAPEPROJECT_RECTANGLE_H
#define SHAPEPROJECT_RECTANGLE_H
class Rectangle : public Shape{
private:
    Point point2;
    Point point3;
    Point point4;
    int height;
    int width;

public:
    //Constructors
    //------------------------------------------------------------------------
    Rectangle();
    Rectangle(int x, int y, int height, int width);

    //Accessors
    //------------------------------------------------------------------------
    void setHeight(int heightToSet);

    void setWidth(int widthToSet);

    int getWidth();

    int getHeight();

    //Methods
//------------------------------------------------------------------------
    std::string info();

};
#endif //SHAPEPROJECT_RECTANGLE_H
