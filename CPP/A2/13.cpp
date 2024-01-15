#include <iostream>
#include <cmath>

class Shape {
protected:
    std::string name;

public:
    Shape(const std::string& n) : name(n) {}

    // Virtual function to calculate the area
    virtual double area() const = 0;

    // Virtual function to display details
    virtual void display() const {
        std::cout << "Shape: " << name << std::endl;
    }

    // Virtual destructor
    virtual ~Shape() {
        std::cout << "Destroying Shape: " << name << std::endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(const std::string& n, double r) : Shape(n), radius(r) {}

    // Override the area function for Circle
    double area() const override {
        return 3.14159 * radius * radius;
    }

    // Override the display function for Circle
    void display() const override {
        Shape::display();
        std::cout << "Radius: " << radius << std::endl;
    }

    // Virtual destructor
    ~Circle() override {
        std::cout << "Destroying Circle: " << name << std::endl;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(const std::string& n, double l, double w) : Shape(n), length(l), width(w) {}

    // Override the area function for Rectangle
    double area() const override {
        return length * width;
    }

    // Override the display function for Rectangle
    void display() const override {
        Shape::display();
        std::cout << "Length: " << length << "\tWidth: " << width << std::endl;
    }

    // Virtual destructor
    ~Rectangle() override {
        std::cout << "Destroying Rectangle: " << name << std::endl;
    }
};

class Trapezoid : public Shape {
private:
    double base1;
    double base2;
    double height;

public:
    Trapezoid(const std::string& n, double b1, double b2, double h) : Shape(n), base1(b1), base2(b2), height(h) {}

    // Override the area function for Trapezoid
    double area() const override {
        return 0.5 * (base1 + base2) * height;
    }

    // Override the display function for Trapezoid
    void display() const override {
        Shape::display();
        std::cout << "Base1: " << base1 << "\tBase2: " << base2 << "\tHeight: " << height << std::endl;
    }

    // Virtual destructor
    ~Trapezoid() override {
        std::cout << "Destroying Trapezoid: " << name << std::endl;
    }
};

int main() {
    Shape* shapes[] = { new Circle("Circle1", 5.0),
                        new Rectangle("Rectangle1", 4.0, 6.0),
                        new Trapezoid("Trapezoid1", 3.0, 7.0, 5.0) };

    for (int i = 0; i < 3; ++i) {
        shapes[i]->display();
        std::cout << "Area: " << shapes[i]->area() << std::endl << std::endl;
    }

    // Deleting objects using base class pointers
    for (int i = 0; i < 3; ++i) {
        delete shapes[i];
    }

    return 0;
}
