/*
    win-tk Project
    Daniel A. White

    common/point.h
*/

#include "common/point.h"

bool Common::Point::operator==(const Point& rhs)
{
    if (this->_x != rhs._x)
        return false;

    if (this->_y != rhs._y)
        return false;

    return true;
}

bool Common::Point::operator!=(const Point& rhs)
{
    return (  !(*this == rhs) );
}