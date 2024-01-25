// Define a base class Shape with a virtual function calculateArea().
// Derive classes Circle and Rectangle from Shape and override calculateArea() for each shape.
#include<iostream>
using namespace std;

class Shape{
	public:
	    virtual double calculateArea(){
			cout<<"----Area----";
			return 0.0;
		}
};
class Circle:public Shape{
	private:
		double radius;
		public:
			Circle(double r):radius(r){}
			double calculateArea()override{
				return 3.14159 * radius * radius;         // Area of a circle
			}
};
class Rectangle:public Shape{
	private:
		int length, width;
		public:
			Rectangle(int l, int w):length(l),width(w){}
			double calculateArea()override{
				return length*width;            //Area of a rectangle
			}
};int main() {
    Shape* shapes[] = {new Circle(5.0), new Rectangle(4.0, 6.0)};

    for (Shape* shape : shapes) {
        cout << "Area: " << shape->calculateArea() << endl;
        delete shape;
    }

    return 0;
}
