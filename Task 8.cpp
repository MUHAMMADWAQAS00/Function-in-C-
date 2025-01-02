#include<iostream>
#include<string>
using namespace std;

int add(int x){
	return x;
}

int add(int x , int y = 6){
	
	return x + y;
}

int main(){
	int a = 4 , b = 5;
	
	//if we apply that code we face an error call an overload ,Function is ambguous 
//	cout<<"Result is : "<<add(a );
	cout<<"Result is : "<<add(a , b);
	
	
	return 0;
}
