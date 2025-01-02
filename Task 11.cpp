#include<iostream>
using namespace std;
int square(int a ){
	return a*a;
}



int main(){
	
	cout<<"Enter the integar to see the Square"<<endl;
	int a;
	cin>>a;
	cout<<"Square Of "<<a<<" is : "<<square(a)<<endl;
	
	
	return 0;
}
