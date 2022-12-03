/*****************************************************************************
 * File: Rectangle.cpp
 * Author: Andrew Krupp
 * Class: COP 3003, Fall 2022
 * Desc: Shapes Calculator
 * Audit: 1.3.0: 11/22/22: Class creation
 *        1.3.1: 12/03/22: Class creation. point[2,3,4], perimeter, and area
 *                         field creation. Method completion.
 *        1.3.2: 12/03/22: Class editing, bug fixes with private properties
 ****************************************************************************/

#include "Rectangle.h"

//Constructors
//------------------------------------------------------------------------
Rectangle::Rectangle(){
    setPoint(0, 0);
    point2 = Point(0,0);
    point3 = Point(0,0);
    point4 = Point(0,0);
    height = 0;
    width = 0;
    perimeter = 0;
    area = 0;
}

Rectangle::Rectangle(Point p, int height, int width){
    setPoint(p.getX(), p.getY());
    this->height = height;
    this->width = width;
    point2 = calcPoint2(getPoint(), height);
    point3 = calcPoint3(getPoint(), height, width);
    point4 = calcPoint4(getPoint(), width);
    perimeter = calcPerimeter(width, height);
    area = calcArea(width, height);

}

//Accessors
//------------------------------------------------------------------------
void Rectangle::setHeight(int heightToSet){height = heightToSet;}
void Rectangle::setWidth(int widthToSet){width = widthToSet;}
void Rectangle::setPoint2(Point p){point2 = p;}
void Rectangle::setPoint3(Point p){point3 = p;}
void Rectangle::setPoint4(Point p){point4 = p;}
int Rectangle::getWidth(){return width;}
int Rectangle::getHeight(){return height;}
Point Rectangle::getPoint2() {return point2;}
Point Rectangle::getPoint3(){return point3;}
Point Rectangle::getPoint4(){return point4;}

//Methods
//------------------------------------------------------------------------
/**
 * virtual function from the shape class, meant to return info on the shape
 * to the main file
 * @return All information on the rectangle
 */
std::string Rectangle::info(){
    return "Points: {(" + std::to_string(getPoint().getX()) + "," + std::to_string(getPoint().getY()) + "), ("
            + std::to_string(point2.getX()) + "," + std::to_string(point2.getY()) + "), ("
            + std::to_string(point3.getX()) + "," + std::to_string(point3.getY()) + "), ("
            + std::to_string(point4.getX()) + "," + std::to_string(point4.getY()) + ")}\n Width: "
            + std::to_string(width) + "\nHeight: " + std::to_string(height) + "\n Perimeter: "
            + std::to_string(perimeter) + "\nArea: " + std::to_string(area);
}

/**
 * calculates where the point above the user provided point
 * @param p the user provided point
 * @param h the user provided height
 * @return the calculated point
 */
Point Rectangle::calcPoint2(Point p, int h){
    p.setY(p.getY()+h);
    return p;
}

/**
 * calculates where the point opposite the user provided point i.e. the point on
 * the opposite corner of the rectangle
 * would be.
 * @param p the user provided point
 * @param h the user provided height
 * @param w the user provided width
 * @return the calculated point
 */
Point Rectangle::calcPoint3(Point p, int h, int w){
    p.setY(p.getY()+h);
    p.setX(p.getX()+w);
    return p;
}

/**
 * calculates where the point to the right of the user provided point
 * would be.
 * @param p the user provided point
 * @param w the user provided width
 * @return the calculated point
 */
Point Rectangle::calcPoint4(Point p, int w){
    p.setX(p.getX()+w);
    return p;
}

/**
 * calculates area from user entered width and height
 * @param w the user provided width
 * @param h the user provided height
 * @return calculated perimeter
 */
int Rectangle::calcArea(int w, int h){
    return w*h;
}
/**
 * calculates perimeter from user entered width and height
 * @param w the user provided width
 * @param h the user provided height
 * @return calculated perimeter
 */
int Rectangle::calcPerimeter(int w, int h){
    return 2*w + 2*h;
}