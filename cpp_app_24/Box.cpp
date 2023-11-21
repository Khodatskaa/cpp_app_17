#include "box.h"

Box::Box() : width(0.0), length(0.0), height(0.0)
{
}

Box::Box(double width, double length, double height)
    : width(width), length(length), height(height)
{
}

void Box::setDimensions(double width, double length, double height)
{
    this->width = width;
    this->length = length;
    this->height = height;
}

double Box::calculateVolume() const
{
    return width * length * height;
}