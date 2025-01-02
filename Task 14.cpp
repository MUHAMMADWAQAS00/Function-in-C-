#include<iostream>
using namespace std;
int waqas(void){

int num[ ]= {6,99,-10,99,65,-99};
int size = 6;
int minimum = INT_MAX;
for(int i = 0 ; i < size ; i++){
	if(num[i]< minimum ){
		minimum = num[i];
	}
}return minimum;
}
int main(){


	cout<<"Minimum number from list is :"<<waqas();
	
	
	return 0;
}
