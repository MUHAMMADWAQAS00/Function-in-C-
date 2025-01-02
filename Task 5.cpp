#include<iostream>
using namespace std;
void add(int x , int y)
{
	cout<< x + y<<endl;
}
double sub(int x , int y)
{
	return x - y ;
}
int mult(int x , int y)
{
	return x * y;
}
int main(){
	int a, b,c,d,e,f;
	cout<<"Enter number for addition"<<endl;
	cin>>a>>b; 
	add(a,b);
	cout<<"Enter number for subtract"<<endl;
	cin>>c>>d;
	cout<<sub(c,d)<<endl;
	cout<<"Enter number for multiply"<<endl;
	cin>>e>>f;
	cout<<mult(e,f)<<endl;
	
	
	return 0;
}
