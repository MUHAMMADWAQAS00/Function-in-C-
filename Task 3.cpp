#include<iostream>
using namespace std;

int cal(int x , int y)
{
	int z = x + y;

	return z;
}
int main(){
	
	int a , b;
	cout << "Enter the numbers"<<endl;
	cin >> a >> b ;
	
	cout << cal(a , b);
	
	return 0;
}
