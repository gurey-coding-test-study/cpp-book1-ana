#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> data({10, 20, 30, 40});

    cout << "== for, iterator ==" << endl;

    for(auto i = data.begin(); i != data.end(); ++i)
        cout << *i << ", ";

    cout << endl << "== range based for loop ==" << endl;

    for(const auto i : data)
        cout << i << ", ";

    cout << endl << "== range based for loop ==" << endl;

    for(auto &i : data)
        cout << i + 2 << ", ";

    cout << endl;

    return 0;
}