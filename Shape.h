/*****************************************************************************
 * File: Shape.h
 * Author: Andrew Krupp
 * Class: COP 3003, Fall 2022
 * Desc: Shapes Calculator
 * Audit: 1.2.0: 11/22/22: Class creation
 ****************************************************************************/

#include "Point.h"
#include <string>

#ifndef SHAPES_SHAPE_H
#define SHAPES_SHAPE_H


class Shape{
public:

private:

    //Accessors
    //------------------------------------------------------------------------

    //Methods
    //------------------------------------------------------------------------
    virtual std::string info();

protected:
//Constructors
//------------------------------------------------------------------------
    Shape();
};
#endif //SHAPES_SHAPE_H
