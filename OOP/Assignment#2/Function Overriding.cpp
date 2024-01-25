// Create a base class Shape with a method draw(). Derive classes Circle, Square, 
//and Triangle from Shape and override draw() to display the shape name.
#include<iostream>
using namespace std;
 
 class Shape{
 	public:
 		virtual void draw(){
 			cout<<"A mathematical Shape."<<endl;
		 }
 };
 class Circle:public Shape{
 	public:
 		void draw(){
 			cout<<"I'm a Circle"<<endl;
		 }
 };
 class Triangle:public Shape{
 	public:
 		void draw(){
 			cout<<"I'm a Triangle."<<endl;
		 }
 };
 
 int main(){
 	Shape *cptr= new Circle();
 	Shape *tptr= new Triangle(); 
 	cout<<"Shape 1 says:";
 	cptr->draw();
 	cout<<"Shape 2 says:";
 	tptr->draw();
 	return 0;
 }
