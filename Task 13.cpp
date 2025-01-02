#include<iostream>
using namespace std;
int overload(int x, int y){
	return x + y;
}
int overload(int x , double y){
	return x - y;
}

int main(){
	int a = 4 , b = 2.09;

cout<<overload(a,b);
	
	return 0;
}
