#include <iostream>

#include "Rectangle.h"

// c'tor(s)
Rectangle::Rectangle() : Rectangle(0.0, 0.0, 0.0, 0.0) {}

Rectangle::Rectangle(double top, double left, double width, double height)
{
    m_top = top;
    m_left = left;

    if (width >= 0.0) {
        m_width = width;
    }
    else {
        m_width = 0.0;
    }

    if (height >= 0.0) {
        m_height = height;
    }
    else {
        m_height = 0.0;
    }
}

// getter/setter
double Rectangle::getTop() { return m_top; }
double Rectangle::getLeft() { return m_left; }
double Rectangle::getWidth() { return m_width; }
double Rectangle::getHeight() { return m_height; }

void Rectangle::setTop(double top)
{
    m_top = top;
}

void Rectangle::setLeft(double left)
{
    m_left = left;
}

void Rectangle::setWidth(double width)
{
    if (width >= 0.0) {
        m_width = width;
    }
    else {
        std::cout << "Expected positive value for 'width': " << width << std::endl;
    }
}

void Rectangle::setHeight(double height)
{
    if (height >= 0.0) {
        m_height = height;
    }
    else {
        std::cout << "Expected positive value for 'heigh't: " << height << std::endl;
    }
}

// methods
void Rectangle::moveTo(int newLeft, int newTop)
{
    m_top = newLeft;
    m_left = newTop;
}

double Rectangle::circumference() const
{
    return 2 * (m_width + m_height);
}

double Rectangle::area() const
{
    return m_width * m_height;
}

bool Rectangle::isSquare() const 
{
    return m_width == m_height;
}

Rectangle Rectangle::intersection(Rectangle rect) const
{
    if (m_top + m_height < rect.m_top) {
        Rectangle empty;
        return empty;
    }
    else if (m_top > rect.m_top + rect.m_height) {
        Rectangle empty;
        return empty;
    }

    if (m_left + m_width < rect.m_left) {
        Rectangle empty;
        return empty;
    }
    else if (rect.m_left + rect.m_width < m_left) {
        Rectangle empty;
        return empty;
    }

    double left, width;

    if (m_left < rect.m_left) {
        left = rect.m_left;
        width = m_left + m_width - left;
    }
    else {
        left = m_left;
        width = rect.m_left + rect.m_width - left;
    }

    double top, height;

    if (m_top < rect.m_top) {
        top = rect.m_top;
        height = m_top + m_height - top;
    }
    else {
        top = m_top;
        height = rect.m_top + rect.m_height - top;
    }

    Rectangle result (left, top, width, height);
    return result;
}

void Rectangle::print() const
{
    std::cout << "Rectangle: (" << m_left << ',' << m_top << "),(Width="
        << m_width << ", Height=" << m_height << ") ";

    std::cout 
        << "[Area=" << area() 
        << ", Circumference=" << circumference()
        << ", IsSquare=" << isSquare() << ']';

    std::cout << std::endl;
}
