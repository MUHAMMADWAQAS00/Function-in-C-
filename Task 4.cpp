#include<iostream>
using namespace std;

int sum(int x , int y){
	int z = x + y;
	return z; 
}
int main(){
	int a = 5 , b = 7;
	cout<< sum(5,7)<<endl;
	cout<< sum(5,9)<<endl;
	cout<< sum(5,10)<<endl;
	
	
	return 0;
}
