#include <bits/stdc++.h>
using namespace std;

int main(){
    string str, full_str;
    cout << "May I know your name ? ";
    cin >> str;
    cout << "Hi " << str << endl;
    cout << "May I know your full name ? ";
    cin.ignore();
    getline(cin, full_str);
    cout << "Hi " << full_str << endl;
    return 0;
}
