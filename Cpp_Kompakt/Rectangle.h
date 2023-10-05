#pragma once

class Rectangle
{
private:
    double m_top;
    double m_left;
    double m_width;
    double m_height;

public:
    // c'tors
    Rectangle();
    Rectangle(double top, double left, double width, double height);

    // getter/setter
    double getTop() const;
    double getLeft() const;
    double getWidth() const;
    double getHeight() const;

    void setTop(double top);
    void setLeft(double left);
    void setWidth(double width);
    void setHeight(double height);

    // public interface // methods
    void moveTo(int newLeft, int newTop);
    double circumference() const;
    double area() const;
    bool isSquare() const;
    Rectangle intersection(Rectangle rect) const;
    void print() const;
};