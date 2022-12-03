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
    int perimeter;
    int area;

public:
    //Constructors
    //------------------------------------------------------------------------
    Rectangle();
    Rectangle(int x, int y, int height, int width);

    //Accessors
    //------------------------------------------------------------------------
    void setHeight(int heightToSet);
    void setWidth(int widthToSet);
    void setPoint2(Point p);
    void setPoint3(Point p);
    void setPoint4(Point p);
    int getWidth();
    int getHeight();
    Point getPoint2();
    Point getPoint3();
    Point getPoint4();

    //Methods
//------------------------------------------------------------------------
    std::string info();
    Point calcPoint2(Point p, int h);
    Point calcPoint3(Point p, int h, int w);
    Point calcPoint4(Point p, int w);
    int calcArea(int w, int h);
    int calcPerimeter(int w, int h);


};
#endif //SHAPEPROJECT_RECTANGLE_H
