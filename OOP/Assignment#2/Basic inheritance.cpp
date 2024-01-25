//Define a base class Shape with members to store the dimensions of a shape and a derived class Circle 
//that inherits from Shape. Add a method to calculate the area of the circle.
#include <iostream>
using namespace std;

class Shape {
protected:
    double radius;

public:
    Shape(double r) : radius(r) {}
};

class Circle : public Shape {
public:
    Circle(double r) : Shape(r) {}

    double calculateArea() {
        return 3.14159 * radius * radius; // Simple approximation of pi
    }
};

int main() {
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    Circle myCircle(radius);
    double area = myCircle.calculateArea();

    cout << "Area of the circle is: " << area << endl;

    return 0;
}

