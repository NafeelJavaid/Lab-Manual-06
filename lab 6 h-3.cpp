#include<iostream>
using namespace std;
int main() {
	int x=2;
	cout<<"The pattern is: "<<endl;
	cout<<"1\n";
	for(int i=2;i<=4;++i ) {
		for(int j=1;j<=i;j++){
			cout<<x<<" "; 
	}
	x+=2;
	cout<<endl;
}
return 0;
}