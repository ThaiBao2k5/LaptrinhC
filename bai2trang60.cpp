#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main()
{
	float x;
	cin>>x;
	if (x!=0)
	{
		cout<<"f(x) = 1/x = "<<1/x;
	}
	if (x>0)
	{	
		cout<<"f(x) = ln|sin(x)| = "<<log(abs(sin(x)));
	}
	if (x<0)
	{
		cout<<"f(x) = (x^2+2x)/cos(x) = "<<(x*x+2*x)/cos(x);
	}	
}
