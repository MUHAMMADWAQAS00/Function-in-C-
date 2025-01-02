#include<iostream>
using namespace std;
int y;
int func2(void)
{
	int fact =1;
	
	for (int i = y ; i > 0; i--){
		fact *= i;
	}
	return (fact);
}	
int main(){
	int ans;
	cin>> y;

	ans = func2( );
	cout << ans;
	return 0;
}

