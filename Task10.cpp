#include<iostream>
using namespace std;
//paraeters pass by reference
void update(int &a){
	a++;
}
int main(){
	//Due to & sign value is updated output becomes 7
	int a = 6;
	update(a);
	cout<<a;
	
	return 0;
}
