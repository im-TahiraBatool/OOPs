#include<iostream>
using namespace std;

class student{
	public:
		int id;
		string name, course;
		
		void display(){
			cout<<"Name of the student is "<<name<<endl;
			cout<<"I'd of the student is "<<id<<endl;
			cout<<"Course of the student is "<<course<<endl;
		}
		student(int i, string n, string c){        //constructor
			name=n;
			id=i;
			course=c;
		}	
};
int main(){
	student s1=student(50, "Batool","BSCS" );
	s1.display();
	student s2=student(49, "Mahnoor","BSIT" );
	s2.display();
	student s3=student(65, "Rida","BSCS" );
	s3.display();
}
