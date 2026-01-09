#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int totalLength = 0;
        int count = 0;
        string word;
        for (int i = 0; i < n; i++)
        {
            cin >> word;
            totalLength += word.length();
            if (totalLength <= m)
            {
                count++;
            }
        }
        cout << count << '\n';
    }
}
