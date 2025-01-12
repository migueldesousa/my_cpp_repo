#include<iostream>

using namespace std;

class Animal
{
    public:
        int age = 2;
};

class Peixe : public Animal
{
    public:
    void Nada()
    {
        cout  << "A nadar.." <<endl;
    }
};

class Tubarao: public Peixe
{
    public:
    void Ataca()
    {
        cout  << "A atacar o Samuel L. Jackson." <<endl;
    }
};

class TubaraoMartelo: public Tubarao
{

};

int main()
{
    TubaraoMartelo tm;
    cout <<"O tubarao tem " << tm.age << " anos." << endl;
    tm.Nada();
    tm.Ataca();
    return 0;
}
