#include<iostream>
using namespace std;
int fact(int a);//Function Declaration
int main (){
	//Calling Function
	int a , ans;
	cout<<"Enter The numbr to check its factorial"<<endl;
	cin >> a;
	cout<<"Factorial of "<< a <<" is "<<fact(a)<<endl;
	
	
}
//function Body //
int fact(int a)
{
	int ans = 1;

	for(int i =1; i<=a; i++)
	ans = ans *i;
	return ans;

}
