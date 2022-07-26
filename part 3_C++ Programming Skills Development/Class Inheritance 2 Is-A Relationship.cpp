#include <iostream>

using namespace std;

class Landload
{
public:
    void IamLandload() { cout << "건물주입니다." << endl; }
};

class Telnant
{
public:
    void IamTelnant() { cout << "세입자입니다." << endl; }
};

class Nation : public Landload, public Telnant
{
public:
    void who()
    {
        cout << "저는 ";

        if(is_landload == true)
            IamLandload();
        else
            IamTelnant();
    }

public:
    bool is_landload;
};

int main()
{
    Nation nation;
    nation.is_landload = true;
    nation.who();
    
    return 0;
}