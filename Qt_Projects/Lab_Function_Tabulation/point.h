#ifndef POINT_H
#define POINT_H


class Point
{
private:
    double x{0.0};
    double y{0.0};
public:
    Point();
    Point(double x, double y);

    double getX();
    double getY();

    void setX(double x);
    void setY(double y);
};

#endif // POINT_H
