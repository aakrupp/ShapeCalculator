/*****************************************************************************
 * File: Line.h
 * Author: Andrew Krupp
 * Class: COP 3003, Fall 2022
 * Desc: Shapes Calculator
 * Audit: 1.1.0: 12/03/22: Class creation
 ****************************************************************************/

#include "Shape.h"

#ifndef SHAPEPROJECT_LINE_H
#define SHAPEPROJECT_LINE_H
class Line : public Shape {
public:
    Point point2;
    double slope;
    double angle;

private:
    //Constuctors
    //------------------------------------------------------------------------
    Line();
    Line(Point point, Point point2);

    //Accessors
    //------------------------------------------------------------------------
    void setPoint2(int x, int y);
    Point getPoint2();
    void setSlope(Point p, Point p2);
    double getSlope();
    void setAngle(Point p, Point p2);
    double getAngle();


    //Methods
    //------------------------------------------------------------------------
    std::string info();
    double calcSlope(Point p, Point p2);
    double calcAngle(Point p, Point p2);

};
#endif //SHAPEPROJECT_LINE_H
