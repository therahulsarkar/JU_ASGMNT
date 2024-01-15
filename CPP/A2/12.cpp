#include <iostream>

class Shape {
public:
    void print() const {
        std::cout << "This is a shape." << std::endl;
    }
};

class Polygon : public Shape {
public:
    void print() const {
        std::cout << "Polygon is a shape." << std::endl;
    }
};

class Rectangle : public Polygon {
public:
    void print() const {
        std::cout << "Rectangle is a polygon." << std::endl;
    }
};

class Triangle : public Polygon {
public:
    void print() const {
        std::cout << "Triangle is a polygon." << std::endl;
    }
};

class Square : public Rectangle {
public:
    void print() const {
        std::cout << "Square is a rectangle." << std::endl;
    }
};

int main() {
    Shape shape;
    Polygon polygon;
    Rectangle rectangle;
    Triangle triangle;
    Square square;

    std::cout << "Calling function for Shape:" << std::endl;
    shape.print();

    std::cout << "\nCalling function for Polygon:" << std::endl;
    polygon.print();

    std::cout << "\nCalling function for Rectangle:" << std::endl;
    rectangle.print();

    std::cout << "\nCalling function for Triangle:" << std::endl;
    triangle.print();

    std::cout << "\nCalling function for Square:" << std::endl;
    square.print();

    return 0;
}
