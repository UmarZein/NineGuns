#ifndef __Vec2D__
#define __Vec2D__

#include <vector>
class Vec2D{
public:
    double x;
    double y;
    std::vector<double> vec;
    Vec2D();
    Vec2D(double x_, double y_);
    Vec2D operator-();
    Vec2D operator+(Vec2D v);
    Vec2D operator-(Vec2D v);
    Vec2D operator*(Vec2D v);
    Vec2D operator/(Vec2D v);
    Vec2D operator+(double d);
    Vec2D operator*(double d);
    Vec2D operator/(double d);

};

#endif