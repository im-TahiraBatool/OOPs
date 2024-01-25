//Define a base class Base with a virtual function display(). Derive a class Derived from Base and override display().
//Create objects of both classes and call the display() method to observe dynamic binding.
#include<iostream>
using namespace std;
 
 class Base{
 	public:
 		virtual void display(){
 			cout<<"You are in Base Class."<<endl;
		 }
 };
 class Derive:public Base{
 	public:
 		void display()override{
 			cout<<"You are in Derive Class."<<endl;
		 }
 };
 int main(){
 Base *bptr=new Derive();
 bptr->display();
 return 0;	
 }
