/*****************************************************************************
 * File: Circle.cpp
 * Author: Andrew Krupp
 * Class: COP 3003, Fall 2022
 * Desc: Shapes Calculator
 * Audit: 1.1.0: 12/03/22: Class creation
 *        1.1.1: 12/03/22: Class editing, bug fixes with private properties
 ****************************************************************************/

#include "Circle.h"
#include <cmath>

//Constructors
//------------------------------------------------------------------------
Circle::Circle(){
    setPoint(0,0);
    radius = 0;
    diameter = 0;
    circumference = 0;
    area = 0;
}
Circle::Circle(Point p, int r){
    setPoint(p.getX(), p.getY());
    radius = r;
    diameter = calcDiameter(r);
    circumference = calcCircumference(r);
    area = calcArea(r);
}

//Accessors
//------------------------------------------------------------------------
void Circle::setRadius(int r){radius = r;}
void Circle::setDiameter(int r){diameter = calcDiameter(r);}
void Circle::setArea(int r){area = calcArea(r);}
void Circle::setCircumference(int r){circumference = calcCircumference(r);}
int Circle::getRadius(){return radius;}
int Circle::getDiameter(){return diameter;}
int Circle::getCircumference(){return circumference;}
int Circle::getArea(){return area;}

//Methods
//------------------------------------------------------------------------
/**
 * returns the information on the shape for display
 * @return info on the shape
 */
std::string Circle::info(){
    return "Center: (" + std::to_string(getPoint().getX()) + "," + std::to_string(getPoint().getY()) + ")\nRadius: "
            + std::to_string(radius) + "\nDiameter: " + std::to_string(diameter) + "\nCircumference: "
            + std::to_string(circumference) + "\nArea: " + std::to_string(area);
}

/**
 * calculates the diameter of the circle from the radius
 * @param r the user provided radius
 * @return
 */
double Circle::calcDiameter(int r){
    return 2.0*(double)r;
}

/**
 * calculates the circumference of the circle from the radius
 * @param r the user provided radius
 * @return
 */
double Circle::calcCircumference(int r){
    return 2.0*(double)r*M_PI;
}

/**
 * calculates the area of the circle from the radius
 * @param r the user provided radius
 * @return
 */
double Circle::calcArea(int r){
    return M_PI*(double)(r*r);
}