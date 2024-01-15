#include <iostream>

class Circle {
private:
    double radius;

    class AreaCalculator {
    public:
        explicit AreaCalculator(const Circle& circle) : circle(circle) {}

        void printArea() const {
            double area = 3.14159 * circle.radius * circle.radius;
            std::cout << "Area of the circle with radius " << circle.radius << " is: " << area << std::endl;
        }

    private:
        const Circle& circle;
    };

public:
    explicit Circle(double r) : radius(r) {}

    void calculateArea() const {
        AreaCalculator areaCalculator(*this);
        areaCalculator.printArea();
    }
};

int main() {
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    Circle myCircle(radius);
    myCircle.calculateArea();

    return 0;
}
