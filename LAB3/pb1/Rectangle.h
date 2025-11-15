#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float width;
    float height;

public:
    Rectangle(float width, float height);

    float getPerimeter() const;
    float getArea() const;

    bool hasBiggerPerimeter(const Rectangle& other) const;
    bool hasBiggerArea(const Rectangle& other) const;
};

#endif
