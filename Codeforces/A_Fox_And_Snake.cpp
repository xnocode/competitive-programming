#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    for (int i = 1; i <= x; i++)
    {
        if (i % 4 == 2)
        {
            for (int i = 1; i < y; i++)
            {
                cout << ".";
            }
            cout << "#";
        }
        else if (i % 4 == 0)
        {
            cout << "#";
            for (int i = 1; i < y; i++)
            {
                cout << ".";
            }
        }
        else
        {
            for (int i = 1; i <= y; i++)
            {
                cout << "#";
            }
        }
        cout << endl;
    }
}