// Create a base class Person with attributes name and age. Create a derived class Student which
// inherits from Person and has additional attributes studentId and grade. Implement appropriate methods
#include<iostream>
using namespace std;

class person{
	public:
	int age;
	string name;
	void display(){
		cout<<"Name:"<<name<<endl;
		cout<<"Age:"<<age<<endl;
	}
	person(string n, int a){
		name=n;
		age=a;
	}
};
class student:public person{
	public:
	int id;
	double grade;
	void show(){
		person::display();
		cout<<"Student i'd:"<<id<<endl;
		cout<<"Grade:"<<grade<<endl;
	}
	    student(string name, int age, int id, double grade)
        : person(name, age), id(id), grade(grade) {}

};
int main(){
	person p1=person("Sarah",17);
	cout<<"Person's Information"<<endl;
	p1.display();
	student s1("Sham",18,50 , 94.30);
	cout<<"Student's Information"<<endl;
	s1.show();
	return 0;
}



