#include<iostream>
using namespace std;

int main()
{
	int a, b, c, z, x, d,n,m;
	cout<<"plase enter the number is : ";
	cout<<"\n enter a :";
	cin>>a;
	cout<<"the a is = "<<a<<endl;
	cout<<"\n enter b :";
	cin>>b;
	cout<<"the b is = "<<b<<endl;
	cout<<"\n enter c :";
	cin>>c;
	cout<<"the c is = "<<c<<endl;
	cout<<"\n enter x :";
	cin>>x;
	x=-b/n*a;
	cout<<"the x is = "<<x<<endl;
//	cin>>a,b,c,x;
	z=a*(x^2)+b*x+c;
	z=0;
	n=2;
	m=4;
//	x=-b/n*a;
	d=b*b-m*a*c;
	cout<<" the delta is ="<<d<<endl;
	if(d>0)
    	cout<<"the del is x ="<<x*x<<endl;
    if(d==0)
			cout<<" the x is = "<<x<<endl;
	else 
			cout<<"error "<<endl;
	
	return 0;
}