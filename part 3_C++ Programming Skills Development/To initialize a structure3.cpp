#include <iostream>

using namespace std;

struct Info
{
    string country;

    struct who{
        string name;
        string nickname;
    } who;
};

int main()
{
    Info chuck = {"고려", {"장군 척준경", "소드 마스터"}};
    Info anjang = {"고구려", "안장왕 고흥안", "한주 사랑"};

    cout << chuck.country << ", " << chuck.who.name << ", " << chuck.who.nickname << endl;
    cout << anjang.country << ", " << anjang.who.name << ", " << chuck.who.nickname << endl;
    
    return 0;
}