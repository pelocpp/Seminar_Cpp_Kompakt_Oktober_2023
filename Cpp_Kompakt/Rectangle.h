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
    double getTop();
    double getLeft();
    double getWidth();
    double getHeight();
    void setTop(double);
    void setLeft(double);
    void setWidth(double);
    void setHeight(double);

    // public interface
    void moveTo(int newLeft, int newTop);
    double circumference() const;
    double area() const;
    bool isSquare() const;
    Rectangle intersection(Rectangle rect) const;
    void print() const;
};