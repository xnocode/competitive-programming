#include <iostream>
using namespace std;

int main()
{
    int w, x, y, z;
    cin >> w;
    while (w--)
    {
        cin >> x >> y >> z;
        if ((x + y) <= z)
            cout << "+" << endl;
        else
            cout << "-" << endl;
    }
}