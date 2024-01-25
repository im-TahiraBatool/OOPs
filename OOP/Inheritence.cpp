#include<iostream>
using namespace std;

class person{
	int age;
	string name;
	public:
	void eating(){
	cout<<"Eats Apple"<<endl;	
    }
};
class student:public person{
int student_id, grade;
public:
void study(){
	cout<<"Enter student_id:";
	cin>>student_id;
	cout<<"Enter grades:";
	cin>>grade;
}
};

int main(){
student	obj;
obj.eating();
obj.study();
}





