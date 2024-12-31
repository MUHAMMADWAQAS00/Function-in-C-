#include<iostream>
using namespace std;
int main(){
	int startingNumber , endingNumber , productofOdd = 1;
	
	cout<<"Enter first number"<<endl;
	cin >> startingNumber;
	
	cout<<"Enter Last number"<<endl;
	cin >> endingNumber;
	
	cout<<"Even number from "<< startingNumber << " and "<< endingNumber <<" is "<<endl;
	for(int i = startingNumber ; i <= endingNumber ; i++ ){
		if(i % 2 == 0 ){
			cout<<i<<endl;
		}else{
			productofOdd *= i;
		}
	}
	cout<<"Product of odd number is " <<productofOdd<<endl;
	return 0;
}




























