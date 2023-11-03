#include <iostream>

using namespace std;

class Area {
private:
    double length;
    double breadth;
    double radius;

public:
    void setRectangleDim(double l, double b) {
        length = l;
        breadth = b;
    }

    void setCircleDim(double r) {
        radius = r;
    }

    double getRectangleArea() {
        return length * breadth;
    }

    double getTriangleArea(double base, double height) {
        return 0.5 * base * height;
    }

    double getCircleArea() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Area shapes;
    double length, breadth, base, height, radius;

    std::cout << "Enter length of rectangle: ";
    std::cin >> length;

    std::cout << "Enter breadth of rectangle: ";
    std::cin >> breadth;

    shapes.setRectangleDim(length, breadth);

    std::cout << "Enter base of triangle: ";
    std::cin >> base;

    std::cout << "Enter height of triangle: ";
    std::cin >> height;

    std::cout << "Enter radius of circle: ";
    std::cin >> radius;

    shapes.setCircleDim(radius);

    double rectangleArea = shapes.getRectangleArea();
    double triangleArea = shapes.getTriangleArea(base, height);
    double circleArea = shapes.getCircleArea();

    std::cout << "Area of rectangle: " << rectangleArea << "\n";
    std::cout << "Area of triangle: " << triangleArea << "\n";
    std::cout << "Area of circle: " << circleArea << "\n";

    return 0;
}

