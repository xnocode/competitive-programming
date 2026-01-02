#include <iostream>
using namespace std;
int main()
{
    int x, c = 0;
    string o, p;
    cin >> x;
    while (x--)
    {
        cin >> o;
        if (o != p)
        {
            c++;
        }
        p = o;
    }
    cout << c;
}