#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main()
{
float tong;
int n;
cin>>n;
for (float m = 1;m <= n; ++m)
	{
	tong += ((m)/(m+1));
	}
	cout<<"S ="<< tong;
}

