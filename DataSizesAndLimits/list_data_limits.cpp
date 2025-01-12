#include <iostream>
#include <limits>
using namespace std;

int main()
{
	cout << "Limit of char(" << sizeof(char) << "bytes) - Min: " << std::numeric_limits<char>::min() << " , Max: "  << std::numeric_limits<char>::max()<<  endl;
	cout << "Size of long is " << sizeof(bool) <<  "bytes) - Min: " << std::numeric_limits<bool>::min() << " , Max: "  << std::numeric_limits<bool>::max()<<  endl;
	cout << "Size of int is " << sizeof(int) <<  "bytes) - Min: " << std::numeric_limits<int>::min() << " , Max: "  << std::numeric_limits<int>::max()<<  endl;
	cout << "Size of float is " << sizeof(float) <<  "bytes) - Min: " << std::numeric_limits<float>::min() << " , Max: "  << std::numeric_limits<float>::max()<<  endl;
	cout << "Size of long is " << sizeof(long) <<  "bytes) - Min: " << std::numeric_limits<long>::min() << " , Max: "  << std::numeric_limits<long>::max()<<  endl;
	cout << "Size of double is " << sizeof(double)  << "bytes) - Min: " << std::numeric_limits<double>::min() << " , Max: "  << std::numeric_limits<double>::max()<<  endl;
	return 0;
}