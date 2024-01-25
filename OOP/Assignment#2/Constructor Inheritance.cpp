// Create a base class Vehicle with attributes like speed and a derived class Car that inherits from Vehicle.
//Implement constructors for both classes and display the speed of the car.
#include<iostream>
using namespace std;

class Vehicle{
	public:
		int speed;
		public:
			void display(){
				cout<<"Speed:"<<speed<<endl;
			}
			Vehicle(int s):speed(s){}
};
class Car:public Vehicle{
        public:
		string model, color;
		void display(){
			Vehicle::display();
			cout<<"Model:"<<model<<endl;
			cout<<"Color:"<<color<<endl;
		}
		Car(string m, int s, string c):Vehicle(speed), model(m), color(c){}
};  
int main(){
	Vehicle v1=Vehicle(55);
	v1.display();
	cout<<"----Car Information----"<<endl;
	Car c1= Car("Audi 2023",24,"Black");
	c1.display();
}
