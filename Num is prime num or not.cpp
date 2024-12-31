//Condition 
//Take 2 numbrs from user first check the numbr is prime num or not then calculate its factorial
//and same work with second numbr


#include<iostream>

using namespace std;
bool prime(int m);
int fact(int n);

int main (){
	
	int a , b;

	cout<<"Enter Two Numbrs To Check its prime Numbrs or Not and Calculate its Factorial"<<endl;
	cin >> a >> b;
//	int prime( a);	
	cout<<prime(a)<<endl;
	cout<<fact(a)<<endl;
	cout<<prime(b)<<endl;
	cout<<fact(b)<<endl;
	cout<<prime(b-a)<<endl;
	cout<<fact(b-a)<<endl;
}

bool prime(int m)
{
	if(m < 2)
	return 0;
	for(int i = 2; i < m ; i++)
	{
		if(m % i== 0)
	    return 0;
	}
	return 1 ;
}
int fact(int n)
{
	int ans =1;
	for (int i = 1 ; i <= n ; i++)
	ans = ans*i;
	return ans;
}
