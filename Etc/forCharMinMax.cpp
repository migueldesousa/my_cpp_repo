#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int charMin = std::numeric_limits<char>::min();
    int charMax = std::numeric_limits<char>::max();

    cout << "Char - "  << charMin << " : " << (char)charMin <<  endl;
    cout << "Char - "  << charMax << " : " << (char)charMax <<  endl;
    for(int i =charMin;i<=charMax;i++)
    {
        cout << "Char - "  << i << " : " << (char)i <<  endl;
    }
	

	 return 0;
}