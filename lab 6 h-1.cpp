#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int x,s(0);
	bool P;
	for(int i=2;i<=50;++i) {
		P=true;
	
	for(int x=2;x<=sqrt(i);++x){
		if(i%x==0){
			P=false;
			break;
		}
	}
	if(P){
	
		s+=i;
    	} 
    }
cout<<"Sum of Prime numbers: "<<s;
return 0;
}