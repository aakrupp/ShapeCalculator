/*****************************************************************************
 * File: Line.cpp
 * Author: Andrew Krupp
 * Class: COP 3003, Fall 2022
 * Desc: Shapes Calculator
 * Audit: 1.1.0: 12/03/22: Class creation
 ****************************************************************************/

#include "Line.h"
#include <cmath>

//Constructors
//------------------------------------------------------------------------
Line::Line(){
    setPoint(0, 0);
    point2 = Point(0,0);
    slope = 0.0;
    angle = 0.0;
}

Line::Line(Point point, Point point2){
    setPoint(point.getX(), point.getY());
    this->point2 = point2;
    slope = calcSlope(point, point2);
    angle = calcAngle(point, point2);
}

//Accessors
//------------------------------------------------------------------------
void Line::setPoint2(int x, int y){point2 = Point(x, y);}
Point Line::getPoint2(){return point2;}
void Line::setSlope(Point p, Point p2){slope = calcSlope(p, p2);}
double Line::getSlope(){return slope;}
void Line::setAngle(Point p, Point p2){angle = calcAngle(p, p2);}
double Line::getAngle(){return angle;}


//Methods
//------------------------------------------------------------------------
/**
 * Display the information about the line to the user
 * @return a string of the information about the line object
 */
std::string Line::info(){
    return "Points: {(" + std::to_string(getPoint().getX()) + "," + std::to_string(getPoint().getY()) + "), ("
            + std::to_string(point2.getX()) + "," + std::to_string(point2.getY()) + ") \nSlope: "
            + std::to_string(slope) + "\nAngle: " + std::to_string(angle);

}

/**
 * calculate the slope from the two points
 * @param p point 1, input by the user
 * @param p2 point 2, input by the user
 * @return The calculated slope
 */
double Line::calcSlope(Point p, Point p2){
    return ((double)p2.getY() - (double)p.getY())/((double)p2.getX() - (double)p.getX());
}

/**
 * calculate the angle from the x axis from the line created by two points
 * @param p point 1, input by the user
 * @param p2 point 2, input by the user
 * @return the calculated angle
 */
double Line::calcAngle(Point p, Point p2){
    return atan(calcSlope(p, p2))*180/M_PI;
}
