//     long long last_three_digits = n % 1000;
//     long long remaining_number = n / 1000;

#include <bits/stdc++.h>
using namespace std;

int main(){
    string x; 
    cin >> x;
    int n = x.length();

    for (int i = 0; i < n; i++) {
        cout << x[i];
        if( (n - i - 1) % 3 == 0 && (n - i - 1) != 0 ) {
            cout << ",";
        }
    }
    cout << "\n";
    return 0;
}