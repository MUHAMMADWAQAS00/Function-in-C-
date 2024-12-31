#include<iostream>
using namespace std;

int sum(int ,int );

int Mul(int , int);//Function Declaration

void fun();

int main(){///function calling
	cout<<"Enter Two numbers :"<<endl;
	int a,b;
	cin >> a >> b;

	cout<<"Sum of "<< a <<'+'<< b <<" is :"<<sum(a,b)<<endl;
	
	cout<<"Mulitiply of "<< a << '*' << b << " is :"<<Mul(a,b)<<endl;
	
	fun();
}

int sum(int m , int n )
{//body function
	int ans = m + n;
	cout<<endl;
	

	return ans;
}//second UDF 
int Mul(int m , int n)
{
	int ans = m*n;

	return ans;
}
void fun(){
	cout<<"Hello Wiki"<<endl;
}

