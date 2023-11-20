#include<iostream>
using namespace std;
int main()
{
	int a,x(0),y(1),z;
	cout<<"Enter the number of terms";
	cin>>a;
	for(int i=0;i<a;++i) {
		cout<<x<<",";
		z=x+y;
		x=y;
		y=z;
	}
	return 0;
}