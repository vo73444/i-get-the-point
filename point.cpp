#include <iostream>
#include <cmath>
#include "point.hpp"

using namespace std;

Point::Point(float x, float y){
    x_cord = x;
    y_cord = y;
}

float Point::operator-(Point p){
    float d;
    
    float x = pow(x_cord - p.getX(),2);

    float y = pow(y_cord - p.getY(),2);

    d = sqrt((x+y));

    return d;

}

bool Point::operator==(Point p){
    if(x_cord == p.getX() && y_cord == p.getY()){
        return true;
    }

    return false;

}

bool Point::operator!=(Point p){
    if(x_cord == p.getX() && y_cord == p.getY()){
        return false;
    }

    return true;
}

Point Point::operator/(Point p){
    float x;
    float y;

    x = (x_cord + p.getX()) / 2;

    y = (y_cord + p.getY()) / 2;

    Point mid = Point(x, y);

    return mid;
}

Point Point::operator*(double d){
    float x;
    float y;

    x = x_cord * d;
    y = y_cord * d;

    Point scale = Point(x, y);

    return scale;
}

float Point::getX(){
    return x_cord;

}

float Point::getY(){
    return y_cord;
}

float Point::operator[](char cord){
    if(cord == 'x' || cord == 'X'){
        return x_cord;
    }

    else if(cord == 'y' || cord == 'Y'){
        return y_cord;
    }

    return 0;
}

void Point::prettyPrint(){
    cout << "(" << x_cord << ", " << y_cord << ")";
}
