#include <iostream>

using namespace std;

class Forma
{
	public:
        int posX = 0;
        int posY = 0;
        void Position()
        {
            cout << posX<< "," << posY<< endl;
        }	
};

class Circulo : public Forma
{
    public:
    void Move(int pX, int pY)
    {
        posX = pX;
        posY = pY;
    }

};

int main()
{
	Forma forma1;
	forma1.Position();
	Circulo circulo1;
	circulo1.Position();
    circulo1.Move(5,5);
    circulo1.Position();
    return 0;
}