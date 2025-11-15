#include "Rectangle.h"

Rectangle::Rectangle(float width, float height) {
    this->width = width;
    this->height = height;
}

float Rectangle::getPerimeter() const {
    return 2 * (width + height);
}

float Rectangle::getArea() const {
    return width * height;
}

bool Rectangle::hasBiggerPerimeter(const Rectangle& other) const {
    return this->getPerimeter() > other.getPerimeter();
}

bool Rectangle::hasBiggerArea(const Rectangle& other) const {
    return this->getArea() > other.getArea();
}
