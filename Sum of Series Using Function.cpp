#include<iostream>
using namespace std;
int a =1 , sum = 0;
int series(int a )
{
	while(a < 5)
	{
		
		
		int square = a*a;
	cout << square <<endl; 
	sum = square + sum ;
		a++;
		
	}
	return sum;
}


int main(){

   cout<<"Sum of all numbers is "<< series(a);

	
	
	
	return 0;
}

//#include <iostream>
//using namespace std;
//
//int a = 1, sum = 0;
//
//int series(int a) {
//    while (a < 5) {
//        int square = a * a;
//        cout << square << endl;  // Print the square of the number
//        sum = sum + square;      // Add the square to the sum
//        a++;
//    }
//    return sum;  // Return the sum of squares
//}
//
//int main() {
//    int totalSum = series(a);  // Call the function and store the result
//    cout << "Sum of squares: " << totalSum << endl;  // Print the total sum
//    return 0;
//}

