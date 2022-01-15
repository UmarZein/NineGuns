#include <cmath>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <map>
#include <string>
#include <typeinfo>
#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <complex>

#include "../lib/Vec2D.h"



std::ostream& operator<< (std::ostream &out, const Vec2D &num) {
    out << '(' << num.x; 
    if (num.y>=0.0){out << ", ";} 
    out << num.y << ")";
    return out;
}
/*
TODO:
re make git and github rep

*/

int main(){
    Vec2D v1{2.0,1.0};
    Vec2D v2{3.0,5.0};
    std::cout << v1 << '\n';
    std::cout << v2 << '\n';
    std::cout << v1+v2 << '\n';
    std::cout << v1-v2 << '\n';
    std::cout << v1*v2 << '\n';
    std::cout << v1/v2 << '\n';
    return 0;
    
}

// WARNING: don't forget to include programmer-defined headers !! (using src/... content/.../...)


//   clang++ -o main src/main.cpp src/Vec2D.cpp && main