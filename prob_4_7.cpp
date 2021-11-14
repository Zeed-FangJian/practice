#include<iostream>
#include<vector>
using namespace::std;
int main() {
    const size_t array_size = 10;
    int array1[array_size] = {1, 2, 3, 4};
    int array2[array_size];
    for (int ix = 0; ix != array_size; ++ix) {
        array2[ix] = array1[ix];
        cout << array2[ix] << ' ';
    }
    int count;
    for (count = 0; count != array_size; ++count) {
        if (array2[count] != array1[count]) {
            cout<<"two arrays are not the same!" << endl;
        }
    }
    if (count == array_size) {
        cout <<"Two vectors are the same" << endl;
    }
    cout << endl;
    vector<int> ivec1(5, 10);
    vector<int> ivec2;
    for (vector<int>::iterator iter = ivec1.begin(); iter != ivec1.end(); ++iter) {
        ivec2.push_back(*iter);
        cout << *iter << ' ';
    }
    cout << endl;
    int array3[array_size];
    for (int ix = 0; ix != array_size; ++ix) {
        array3[ix] = ix;
        cout << array3[ix] << ' ';
    }
    cout << endl;
    return 0;
}