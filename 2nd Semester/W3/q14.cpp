#include <bits/stdc++.h> 
class Point
{
private:
    float x;
    float y;
public:
    void printPoint();
    Point();
    Point(float x, float y);
    float getX();
    float getY();
    void setY(float b);
    void setX(float a);
    float getDistance(Point p);
};




Point::Point()
{
    x = 0;
    y = 0;
}

Point::Point(float a, float b) {
    x = a;
    y = b;
}

void Point::printPoint() {
    std::cout << "(" << x <<  ", " << y << ")";
}

float Point::getX () {
    return x;
}

float Point::getY () {
    return y;
}

void Point::setX (float a) {
    x = a;
}

void Point::setY (float b) {
    y = b;
}

float Point::getDistance(Point p) {
    return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2) );
}