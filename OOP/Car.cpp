#include<iostream>
using namespace std;

class car{
	private:
		int totalcars;
	public:
	string name, model, color;
	void in(){
		cout<<"Name:"<<endl;
		cin>>name;
		cout<<"Model:"<<endl;
		cin>>model;
		cout<<"Color:"<<endl;
		cin>>color;
	}		
	void setcars(){
		cout<<"Total cars:"<<endl;
		cin>>totalcars;
		cout<<name<<model<<color<<totalcars<<endl;
	}
};
main(){
	car c1;
	c1.in();
	c1.setcars();
}
