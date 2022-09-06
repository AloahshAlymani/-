#include <iostream>
using namespace std;
struct emp{
	char name[25];
	int age;
	float salary;
	void print(emp &e)
	{
		cout<<"name is : "<<e.name<<endl;
		cout<<"age is : "<<e.age<<endl;
		cout<<"salary is : "<<e.salary<<endl;
	}
	void set(emp &e)
	{
		cout <<"enter new info an employee :"<<endl;
		cin.get(e.name, 25);
		cin>>e.age;
		cin>>e.salary;
	}
};
int main(int argc, char *argv[])
{
	emp x ={   "ahmad" , 34, 5000};
	emp *y =&x;
	
	y->print(*y);
	y->set(*y);
	y->print(*y);
	
	return 0;
	
}