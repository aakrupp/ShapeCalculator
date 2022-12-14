/*****************************************************************************
 * File: Shape.h
 * Author: Andrew Krupp
 * Class: COP 3003, Fall 2022
 * Desc: Shapes Calculator
 * Audit: 1.2.0: 11/22/22: Class creation
 ****************************************************************************/

#include "Point.h"
#include <string>

#ifndef SHAPEPROJECT_SHAPE_H
#define SHAPEPROJECT_SHAPE_H
class Shape{
private:
    Point point;
public:
    Shape();
    //Accessors
    //------------------------------------------------------------------------
    void setPoint(int x, int y);
    Point getPoint();
    //Methods
    //------------------------------------------------------------------------
    virtual std::string info();


};
#endif //SHAPEPROJECT_SHAPE_H
