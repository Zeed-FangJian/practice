#include<iostream>
#include<cstring>
#include<string>
using namespace::std;
int main() {
    string s1, s2;
    char element;
    cout << "Enter s1 and s2:" << endl;
    cin >> s1 >> s2;
    if (s1 > s2) {
        cout << "s1 is larger than s2" << endl;
    } else if (s1 < s2)
    {
        cout << "s2 is larger than s1" << endl;
    } else {
        cout << "s2 and s1 are the same" << endl;
    }
    const int char_size = 20;
    char a1[char_size], a2[char_size];
    cout << "Enter a1 and a2:" << endl;
    cin >> a1 >> a2;
    int result = strcmp(a1, a2);
    if (result > 0) {
        cout << "a1 is larger than a2" << endl;
    } else if (result < 0)
    {
        cout << "a2 is larger than a1" << endl;
    } else {
        cout << "a1 and a2 are the same" << endl;
    }
    return 0;
}