/*****************************************************************************
 * File: Circle.h
 * Author: Andrew Krupp
 * Class: COP 3003, Fall 2022
 * Desc: Shapes Calculator
 * Audit: 1.1.0: 12/03/22: Class creation
 ****************************************************************************/

#include "Shape.h"

#ifndef SHAPEPROJECT_CIRCLE_H
#define SHAPEPROJECT_CIRCLE_H

class Circle : public Shape{
private:
    int radius;
    double diameter;
    double circumference;
    double area;
public:
    //Constructors
    //------------------------------------------------------------------------
    Circle();
    Circle(Point p, int r);

    //Accessors
    //------------------------------------------------------------------------
    void setRadius(int r);
    void setDiameter(int r);
    void setArea(int r);
    void setCircumference(int r);
    int getRadius();
    int getDiameter();
    int getCircumference();
    int getArea();

    //Methods
    //------------------------------------------------------------------------
    std::string info();
    double calcDiameter(int r);
    double calcCircumference(int r);
    double calcArea(int r);
};
#endif //SHAPEPROJECT_CIRCLE_H
