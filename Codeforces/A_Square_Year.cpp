#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int y;
        cin >> y;
        int r = sqrt(y);
        if (r * r == y)
            cout << 0 << ' ' << r << endl;
        else
        cout << -1 << endl;
    }
}