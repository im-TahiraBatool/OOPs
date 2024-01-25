#include<iostream>
using namespace std;

class marks{
	public:
		int s1,s2,s3,sum,avg;
		void in(){
			cout<<"Marks of the students are as follows:"<<endl;
			cout<<"Enter marks of English:";
			cin>>s1;
			cout<<"Enter marks of Maths:";
			cin>>s2;
			cout<<"Enter marks of Computer:";
			cin>>s3;
		}
		void SUM(){
			sum=s1+s2+s3;
			cout<<"Sum of the subjects:"<<s1<<"+"<<s2<<"+"<<s3<<"="<<sum;
		}
		void AVG(){
			avg=sum/2;
			cout<<"The average if the subjects is:"<<sum<<"/"<<2<<"="<<avg;
		}
};
main(){
	marks m1;
	m1.in();
	m1.SUM();
	m1.AVG();
}
