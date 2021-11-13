#include<iostream>
#include<vector>
#include<cctype>
using namespace std;
int main() {
    vector<string> ivec;
    string element;
    cout << "Enter words:" << endl;
    while (cin >> element) {
        ivec.push_back(element);
    }
    vector<string>::iterator iter;
    int col_ix = 0;
    for (iter = ivec.begin(); iter != ivec.end(); ++iter) {
        for (vector<string> ::size_type ix = 0; ix != (*iter).size(); ++ix) {
            (*iter)[ix] = toupper((*iter)[ix]);
            }
        cout << *iter << ' ';
        ++col_ix; 
        if (col_ix == 8) {
            cout << endl;
        }
    }
    return 0;
}