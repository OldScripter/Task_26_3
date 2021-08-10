#include "../include/point.h"

Point::Point(int x, int y)
{
    if (x < 0) x = 0;
    if (y < 0) y = 0;

    this->x = x;
    this->y = y;
}

void Point::setX(const int newX)
{
    this->x = (newX < 0 ? 0 : newX);
}

void Point::setY(const int newY)
{
    this->y = (newY < 0 ? 0 : newY);
}

void Point::setPoint(const int newX, const int newY)
{
    this->x = (newX < 0 ? 0 : newX);
    this->y = (newY < 0 ? 0 : newY);
}

int Point::getX() const
{
    return x;
}

int Point::getY() const {
    return y;
}
