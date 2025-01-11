#include <iostream>

using namespace std;

int main()
{
	cout << "Size of char is " << sizeof(char) << "bytes" <<  endl;
	cout << "Size of long is " << sizeof(bool) << "bytes" <<  endl;
	cout << "Size of int is " << sizeof(int) << "bytes" <<  endl;
	cout << "Size of float is " << sizeof(float) << "bytes" <<  endl;
	cout << "Size of long is " << sizeof(long) << "bytes" <<  endl;
	cout << "Size of double is " << sizeof(double) << "bytes" <<  endl;
    int numbers[5];
    cout << "Size of int[] with 5 is elements " << sizeof(numbers) << "bytes" <<  endl;
    cout << "Size of int[0] is " << sizeof(numbers[0]) << "bytes" <<  endl;
    cout << "Length of int[] is " << sizeof(numbers)/sizeof(numbers[0]) << " elements" <<  endl;
	return 0;
}