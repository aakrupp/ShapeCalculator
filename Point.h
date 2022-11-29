/*****************************************************************************
 * File: Point.h
 * Author: Andrew Krupp
 * Class: COP 3003, Fall 2022
 * Desc: Shapes Calculator
 * Audit: 1.1.0: 11/22/22: Class creation
 ****************************************************************************/

//HEADER GUARD
#ifndef SHAPES_POINT_H
#define SHAPES_POINT_H

class Point {
private:
    int x;
    int y;

public:
    //Constructors
    //------------------------------------------------------------------------
    Point();
    Point(int x, int y);

    //Accessors
    //------------------------------------------------------------------------
    void setX(int xToSet);
    void setY(int yToSet);
    int getX();
    int getY();

};
#endif //SHAPES_POINT_H

