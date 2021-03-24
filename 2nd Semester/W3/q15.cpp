#include <bits/stdc++.h> 
class Point
{
private:
    float x;
    float y;
public:
    void printPoint();
    Point();
    Point(float, float);
    float getX();
    float getY();
    void setY(float);
    void setX(float);
    float getDistance(Point);
};

class Segment
{
    private: 
        Point point1;
        Point point2;
    public:
        Segment();
        Segment(Point, Point);
        float getLength();
        Point *getIntersect(Segment s);
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
    return sqrt( (x - p.x)*(x - p.x) + (y - p.y)*(y - p.y) );
}

//* default constructor that set point to 0
//* constructor that takes two point obj.
//* float getLength() return the length

Segment::Segment() {
    Point point1;
    Point point2;
}

Segment::Segment(Point p1, Point p2) {
    point1 = p1;
    point2 = p2;
}

float Segment::getLength() {
    return point1.getDistance(point2);
}

Point* Segment::getIntersect(Segment s) {
    //*  https://stackoverflow.com/questions/20677795/how-do-i-compute-the-intersection-point-of-two-lines
}