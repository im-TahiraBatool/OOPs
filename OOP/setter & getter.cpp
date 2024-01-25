#include<iostream>
using namespace std;

class car{
	private:
		string model;
		public:
		void setModel(string m){
			model=m;
		}
		string getModel(){
			return model;
		}
};
int main(){
	car c1;
	c1.setModel("LEU12455");
	cout<<"The model of the car is "<<c1.getModel();
}
