#include <iostream>

class Rectangle {
public:
    Rectangle() : length(0), breadth(0) {}

    void setDimensions(int l, int b) {
        length = l;
        breadth = b;
    }

    void display() const {
        std::cout << "Rectangle with Length: " << length << " and Breadth: " << breadth << std::endl;
    }

    bool isSquare() const {
        return length == breadth;
    }

private:
    int length;
    int breadth;
};

int main() {
    Rectangle rectangles[5]; 

    for (int i = 0; i < 5; ++i) {
        int l, b;
        std::cout << "Enter length for rectangle " << (i + 1) << ": ";
        std::cin >> l;
        std::cout << "Enter breadth for rectangle " << (i + 1) << ": ";
        std::cin >> b;

        rectangles[i].setDimensions(l, b);
    }

    std::cout << "\nRectangles with equal length and breadth:\n";
    for (int i = 0; i < 5; ++i) {
        if (rectangles[i].isSquare()) {
            rectangles[i].display();
        }
    }

    return 0;
}
