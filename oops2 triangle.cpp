#include<iostream>
using namespace std;
class answer
{
	private:
		int b,h,a;
	public:
	void area()
		{
		cout<<"enter both numbers";
		cin>>b>>h;
		a=0.5*b*h;
		cout<<"the area is"<<a<<endl;
	}
	
};
int main()
{
	answer triangle;
	triangle.area();
	return 0;
}
