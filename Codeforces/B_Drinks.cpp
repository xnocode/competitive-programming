#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    double x, sum = 0, value;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        cin >> value;
        sum += value;
    }
  cout << fixed << setprecision(12) << (sum / x);
}