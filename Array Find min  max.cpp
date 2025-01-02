#include <iostream>
using namespace std;

// Function to find minimum and maximum values
void findMinMax(int arr[], int size, int &min, int &max) {
    min = arr[0];
    max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
}

int main() {
    // Declare an array of 10 numbers
    int numbers[10] = {12, 7, 19, 3, 21, 5, 8, 15, 1, 10};
    int min, max;

    // Call the user-defined function to find min and max
    findMinMax(numbers, 10, min, max);

    // Output the results
    cout << "Minimum value: " << min << endl;
    cout << "Maximum value: " << max << endl;

    return 0;
}


//#include <iostream>
//using namespace std;
//
//// Function to find minimum and maximum values
//void findMinMax(int arr[], int size, int &min, int &max) {
//    min = arr[0];
//    max = arr[0];
//    for (int i = 1; i < size; i++) {
//        if (arr[i] < min) {
//            min = arr[i];
//        }
//        if (arr[i] > max) {
//            max = arr[i];
//        }
//    }
//}
//
//int main() {
//    const int SIZE = 10;
//    int numbers[SIZE];
//    int min, max;
//
//    // Input 10 numbers into the array
//    cout << "Enter 10 numbers:" << endl;
//    for (int i = 0; i < SIZE; i++) {
//        cin >> numbers[i];
//    }
//
//    // Call the user-defined function to find min and max
//    findMinMax(numbers, SIZE, min, max);
//
//    // Output the results
//    cout << "Minimum value: " << min << endl;
//    cout << "Maximum value: " << max << endl;
//
//    return 0;
//}

