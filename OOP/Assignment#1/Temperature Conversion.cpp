#include<iostream>
using namespace std;

class temp{
	public:	
    float convert(float celsius) {
        return (celsius * 9/5) + 32;
    }
    
};
int main(){
	temp t1;
	float cel, fahren;
	cout<<"Enter temperature in celsius:";
	cin>>cel;
	fahren= t1.convert(cel);
	cout<<cel<<" degree celsius is equals to "<<fahren<<" degree Fahrenheit.";
}
