#include<iostream>
using namespace std;
int main(){
	int x,y(1);
	cout<<"Enter the number of rows for the triangle: ";
	cin>>x;
	for(int i=0;i<=x;++i){
		for(int j=1;j<=i;++j) {
			cout<<y<<" ";
			y++;
		} 
	cout<<endl;
	}
	return 0;
}