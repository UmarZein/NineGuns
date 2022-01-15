#include <vector>
#include "../lib/Vec2D.h"

Vec2D::Vec2D(){
    x=0.0;
    y=0.0;
}
Vec2D::Vec2D(double x_, double y_){
    x=x_;
    y=y_;
    vec={x_, y_};
}
Vec2D Vec2D::operator-(){
    return Vec2D(-x,-y);
}
Vec2D Vec2D::operator+(Vec2D v){
    return Vec2D(x+v.x,y+v.y);
}
Vec2D Vec2D::operator-(Vec2D v){
    return Vec2D(x-v.x,y-v.y);
}
Vec2D Vec2D::operator*(Vec2D v){
    return Vec2D(x*v.x,y*v.y);
}
Vec2D Vec2D::operator/(Vec2D v){
    return Vec2D(x/v.x,y/v.y);
}
Vec2D Vec2D::operator+(double d){
    return Vec2D(x+d,y+d);
}
Vec2D Vec2D::operator*(double d){
    return Vec2D(x*d,y*d);
}
Vec2D Vec2D::operator/(double d){
    return Vec2D(x/d,y/d);
}
