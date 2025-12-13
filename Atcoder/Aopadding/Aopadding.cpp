#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int size = s.size();
    for(int i = 0; i < n - size; i++){
        s = "o" + s;
    }
    cout << s << endl;
    return 0;
}