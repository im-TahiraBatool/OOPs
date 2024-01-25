	#include<iostream>
using namespace std;

class shape{
	public:
	void draw(int x){
		cout<<"Total lines are "<<x<<endl;
	}	
	void draw(double x){
		cout<<"Total lines are "<<x<<endl;
	}
	void color(string y){
		cout<<"Color = "<<y<<endl;
	}
};
class circle:public shape{
	public:
		void radius(int x){
			cout<<"Radius= "<<x<<endl;
		}
		void radius(double x){
			cout<<"Radius= "<<x<<endl;
		}
		void color(string y){
			cout<<"Color= "<<y<<endl;
		}
};
class triangle:public shape{
	public:
		void angle(int x){
			cout<<"Angle= "<<x<<endl;
		}
		void angle(double x){
			cout<<"Angle= "<<x<<endl;
		}
		void color(string y){
			cout<<"Color= "<<y<<endl;
		}
};

int main(){
	circle obj;
	obj.radius(25);
	obj.color("grey");

	triangle t1;
	t1.angle(12.3);
	t1.draw(12);
	t1.color("blue");
}












