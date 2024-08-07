#include<iostream>
using namespace std;
class Daddy
{
	private:
		int diary; // within class
	protected:
		int phone; // within class and child class
	public:
		int cycles; // within class, child class, other class and main function
};

class Baby: public Daddy // Baby is a child of Daddy // private inheritence is by defalut
{
	// *diary, phone, cycle coming from inheritence
	public:
		void Baby_method() {
			//diary = 10; //it is private
			phone = 100;
			cycle = 200;
			//cout<<"Diary = "<<diary<<endl;
			cout<<"Phone = "<<phone<<endl;
			cout<<"Cycle = "<<cycle<<endl;
		}
};
