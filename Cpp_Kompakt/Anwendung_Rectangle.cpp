#include <iostream>

#include "Rectangle.h"

void test01_ctors()
{
    Rectangle rect1;
    rect1.print();
    Rectangle rect2(3, 3, 5, 5);
    rect2.print();
    Rectangle rect3(3, 3, 5, 1);
    rect3.print();
    Rectangle rect4(3, 3, 1, 1);
    rect4.print();
    Rectangle rect5(3, 3, 1, 5);
    rect5.print();
}

void test02_methods()
{
    Rectangle rect(1, 1, 10, 20);
    rect.print();
    std::cout << "Circumference: " << rect.circumference() << std::endl;
    std::cout << "Area:          " << rect.area() << std::endl;
    std::cout << "IsSquare:      " << rect.isSquare() << std::endl;
}

void test03_move()
{
    Rectangle rect(1, 1, 4, 5);
    rect.print();
    rect.moveTo(5, -5);
    rect.print();
}

void test04_intersection()
{
    Rectangle rect1(5, 5, 10, 15);
    Rectangle rect2(10, 10, 20, 20);
    Rectangle rect = rect1.intersection(rect2);
    rect.print();
}

void test_rechtecke() 
{
    test01_ctors();
    test02_methods();
    test03_move();
    test04_intersection();
}
