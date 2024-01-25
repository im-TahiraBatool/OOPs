#include<iostream>
using namespace std;

class shape{
	public:
		virtual void show(){
			cout<<"Shape"<<endl;
		}
	virtual	void print(){
			cout<<"Hello!"<<endl;
		}
};
class circle:public shape{
	public:
		void show(){
		cout<<"Circle"<<endl;
		}
		void print(){
			cout<<"Hi!"<<endl;
		}
};
int main()
{	shape* sptr;          //sptr is a pointer
	circle d;
	sptr = &d;
	sptr->print();
	sptr->show();
	return 0; 
	}
