#include <iostream>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++)
    {
        int XOR = a[i] ^ b[i];
        cout << XOR;
    }
}