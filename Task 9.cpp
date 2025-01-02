#include<iostream>
#include<string>
using namespace std;
//Parameters pass by value
void value(int x)
{
	x++;
}
int main(){
	int a = 5;
	//we increament in 5 but due to pass by value no changes will done same num will print in out put
	value(a);
	cout<<a;
	
	return 0;
}
