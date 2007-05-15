/*
    win-tk Project
    Daniel A. White

    common/point.h
*/

#ifndef TK_POINT
#define TK_POINT

namespace Common
{
    class Point
    {
    private:
        int _x, _y;

    public:
        // Constructor
        Point(int x = 0, int y = 0) : _x(x), _y(y) { }

        // Accessors and mutators
        int& X() { return _x; }
        int& Y() { return _y; }

        // Operators
        bool operator==(const Point&);
        bool operator!=(const Point&);
    };
};

#endif
