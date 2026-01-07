#include <iostream>
using namespace std;

int main()
{
    int c;
    cin >> c;
    while (c--)
    {
        int x[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> x[i];
        }
        int sum = 0;
        for (int i = 1; i < 4; i++)
            if (x[i] > x[0])
                sum++;
        cout << sum << endl;
    }
}
