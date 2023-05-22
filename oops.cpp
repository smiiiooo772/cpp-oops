#include<iostream>
using namespace std;
class Workplace //class is a keyword
{
	public://access specifier
		void work()
		{
			cout<<"work is going on\n";
		}
};
int main()
{
	Workplace s;//class name(space)object name
	s.work();//fuction call through object
}
