#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float a, b, c;
	cin>>a>>b>>c;
	if (a==0) //truong hop a = 0
	{
		cout<<"phuong trinh bac 1: bx + c = 0";
		if (b==0 && c==0)
		{
			cout<<"x vo so nghiem";
		}
		if (b==0 && c!=0)
		{
			cout<<"x vo nghiem";
		}
		if (b!=0)
		{
			 cout<<"phuong trinh co nghiem x ="<<-c/b;
		}
	
	}
	else // truong hop a!=0
	{
		cout<<"phuong trinh bac 2: ax^2 + bx + c = 0";
			int delta;
			delta = b*b-4*a*c;
		if (delta <0)
		{ 
		cout<< "phuong trinh vo nghiem";
		}
		else if (delta == 0)
		{
		cout<< "phuong trinh co 1 nghiem kep\n "<<"x1 = x2 = "<<-b/(2*a);
		}
		else
		{	
		cout<< "phuong trinh co 2 nghiem phan biet";
		float x1 = (-b+sqrt(delta))/(2*a);
		float x2 = (-b-sqrt(delta))/(2*a);
		cout<<x1<<x2;
		}
	}
}


