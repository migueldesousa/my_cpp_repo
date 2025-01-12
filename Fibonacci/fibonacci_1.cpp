#include <iostream>

using namespace std;

int Fibonnaci(int nr)
{
    if(nr == 1 || nr == 2)
        return 1;
    int f = 1;
    int pastF=1;
    int helper=0;
    for(int i = 3;i<=nr;i++)
    {
        helper = pastF;
        pastF = f;
        f=helper+pastF;
    }
    return f;
}

int main()
{
    cout << "Fibonacci" << endl;

    int f = Fibonnaci(1);
    cout << "Fibonacci of 1 is " << f << endl;
    f = Fibonnaci(2);
    cout << "Fibonacci of 2 is " << f << endl;
    f = Fibonnaci(3);
    cout << "Fibonacci of 3 is " << f << endl;
    f = Fibonnaci(4);
    cout << "Fibonacci of 4 is " << f << endl;
    f = Fibonnaci(5);
    cout << "Fibonacci of 5 is " << f << endl;
    f = Fibonnaci(9);
    cout << "Fibonacci of 9 is " << f << endl;
    f = Fibonnaci(45);
    cout << "Fibonacci of 45 is " << f << endl;
    f = Fibonnaci(100);
    cout << "Fibonacci of 100 is :( " << f << endl;

    return 0;
}