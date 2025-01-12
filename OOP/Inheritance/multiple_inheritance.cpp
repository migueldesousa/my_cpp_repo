#include<iostream>

using namespace std;

 
class Peixe 
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

class Robot
{
    public:
    void UsaOlhosLazer()
    {
        cout << "A usar os olhos lazer..." << endl;
    }
};

class TubaraoMartelo: public Tubarao
{

};

class RoboShark: public Tubarao, public Robot
{

};


int main()
{
    TubaraoMartelo tm;
    tm.Nada();
    tm.Ataca();
    cout << "vs" << endl;
    RoboShark rs;
    rs.Nada();
    rs.Ataca();
    rs.UsaOlhosLazer();
    return 0;
}
