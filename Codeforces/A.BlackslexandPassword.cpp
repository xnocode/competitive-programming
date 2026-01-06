#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;

    while (t > 0) {
        long long k, x;
        cin >> k >> x;
        long long result = k * x + 1;
        cout << result << endl;
        t--;
    }
}
