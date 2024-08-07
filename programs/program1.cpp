#include<iostream>
using namespace std;
class A
{
	private:
		int a;
	protected:
		int b;
	public:
		int c;
};

class B: public A // visibility modes
{
	private:
		//a; // not accessible
	protected:
		//b; // acc. within class
	public:
		//c; //a is inherited but not accessible directly
	void get()
	{
		// a = 10; ERROR
		b = 20;
		c = 30;
		// cout <<"b = "<<a<<endl;
		cout<<"b = "<<b<<endl;
		cout<<"c = "<<c<<endl;
	}
};

int main()
{
	B obj;
	// ob.a = 10; //ERROR
	// ob.b = 20;
	// ob.c = 30;
	cout<<"c = "<<ob.c<<endl;
	ob.get();
	return 0;
}
