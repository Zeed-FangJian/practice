#include<iostream>
#include<cctype>
#include<vector>
using namespace::std;
int main() {
    vector<int> ivec;
    vector<int>::iterator iter = ivec.end();
    int num;
    while (ivec.size() != 10) {
        cin >> num;
        ivec.push_back(num);
    }
    for (iter = ivec.begin(); iter != ivec.end(); ++iter) {
        *iter = (*iter) * 2;
        cout << *iter << " ";
    }
    cout << endl;
    return 0;
}