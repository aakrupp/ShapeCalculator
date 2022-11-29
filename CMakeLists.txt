cmake_minimum_required(VERSION 3.23)
project(ShapesCalculator)

set(CMAKE_CXX_STANDARD 17)

add_executable(ShapesCalculator shapes.cpp Point.h Point.cpp Rectangle.h Rectangle.cpp Shape.h Shape.cpp)
