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
double Rectangle::getTop() const { return m_top; }
double Rectangle::getLeft() const { return m_left; }
double Rectangle::getWidth() const { return m_width; }
double Rectangle::getHeight() const { return m_height; }

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
    return 2.0 * (m_width + m_height);
}

double Rectangle::area() const
{
    return m_width * m_height;
}

bool Rectangle::isSquare() const 
{
    bool result;
    result = (m_width == m_height);
    return result;

    // oder kürzer:
    // return m_width == m_height;
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

bool Rectangle::equals(Rectangle other)
{
    //if (m_top != other.getTop())
    //    return false;
    // oder

    if (m_top != other.m_top)
        return false;
    else if (m_left != other.m_left)
        return false;
    else if (m_width != other.m_width)
        return false;
    else if (m_height != other.m_height)
        return false;
    else 
        return true;
}

// operators
//bool Rectangle::operator== (Rectangle other)
//{
//    if (m_top != other.m_top)
//        return false;
//    else if (m_left != other.m_left)
//        return false;
//    else if (m_width != other.m_width)
//        return false;
//    else if (m_height != other.m_height)
//        return false;
//    else
//        return true;
//}
//
//bool Rectangle::operator!= (Rectangle other)
//{
//    // wenn es geht: Quellcode wieder verwenden
//
//    bool result = true;
//
//    result = ! ( *this == other );   // this ist eine Adresse (Zeiger), deshalb muss für den Wert ein * davor
//     
//    return result; 
//}

// ====================================

// globale Funktion

// Diese Realisierung basiert auf der öffentlichen Schnittstelle
// der Klasse Rectangle
// Anders formuliert: Die Klasse Rectangle (ihr Entwickler) weiß nichts davon.

//bool operator == (Rectangle left, Rectangle right)
//{
//    //if (m_top != other.getTop())
//    //    return false;
//    // oder
//
//    if (left.getTop() != right.getTop())
//        return false;
//    else if (left.getLeft() != right.getLeft())
//        return false;
//    else if (left.getWidth() != right.getWidth())
//        return false;
//    else if (left.getHeight() != right.getHeight())
//        return false;
//    else
//        return true;
//}

// =====================================================================

// Diese Realisierung setzt voraus, dass die Klasse Rectangle
// die globale Funktion / den globalen Operater 
// als 'friend' akzeptiert / deklariert!
// 
// Anders formuliert: Die Klasse Rectangle (ihr Entwickler) weiß davon.

bool operator == (Rectangle left, Rectangle right)
{
    if (left.m_top != right.m_top)
        return false;
    else if (left.m_left != right.m_left)
        return false;
    else if (left.m_width != right.m_width)
        return false;
    else if (left.m_height != right.m_height)
        return false;
    else
        return true;
}
