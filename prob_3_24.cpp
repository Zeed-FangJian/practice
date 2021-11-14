#include<iostream>
#include<string>
#include<bitset>
#include<vector>
using namespace::std;
int main() {
    vector<int> ivec;
    ivec.push_back(1);
    ivec.push_back(2);
    ivec.push_back(3);
    ivec.push_back(5);
    ivec.push_back(8);
    ivec.push_back(13);
    ivec.push_back(21);
    bitset<32> bitvec;
    for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter) {
        bitvec.set(*iter);
    }
    cout << bitvec << endl;

    return 0;
}
