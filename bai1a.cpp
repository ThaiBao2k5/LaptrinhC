#include <iostream>
using namespace std;
int main () 
{
int n;
cin>>n;
	if (n<1) 
	{
 		cout<<"N"<<endl;
		return 0;
	}
	int arr[n];
	for (int i = 0;i<n;i++)
	{ 
		cin >> arr[i];
	}
    for (int i = 0;i<n;i++) 
	{
    	cout <<"arr["<<i<<"] = "<<arr[i]<<endl;
	}
	int max = arr[0],min = arr[0];
	for (int i = 0;i < n;i++) 
	{
		if (arr[i] > max) 
		{
		max = arr[i];
		}
		if (arr[i] < min) 
		{
		min = arr[i];
		}
	}
cout<<max<<endl;
cout<<min<<endl;
}
