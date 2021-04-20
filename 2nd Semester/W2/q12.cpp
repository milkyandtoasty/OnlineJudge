class Point
{
private:
    float x;
    float y;

public:
    void printPoint();
    Point();
    Point(float x, float y);
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


};