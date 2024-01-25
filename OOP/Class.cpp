#include<iostream>
using namespace std;

class computer{
	int model,price;
	string color;
	
	public:
		void in(){
		cout<<"Properties of a Computer"<<endl;
		cout<<"Enter color of the Computer="<<endl;
		getline(cin,color);
		cout<<"Enter model of the Computer="<<endl;
		cin>>model;
		cout<<"Enter price of the Computer="<<endl;
		cin>>price;
		}
		void out(){
			cout<<"Properties of the Computer are as follows:"<<endl;
			cout<<"Color of the computer is "<<color<<endl;
			cout<<"Model of the computer is "<<model<<endl;
			cout<<"Price of the Computer is "<<price<<endl;
		}
		};
		main(){
			computer c1;
			c1.in();
			c1.out();
		}
