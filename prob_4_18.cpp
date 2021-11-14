#include<iostream>
using namespace::std;
int main() {
    const int array_size = 5;
    int array[array_size] = {1, 2, 3, 4, 5};
    for (int *p1 = array, *p2 = p1 + array_size; p1 != p2; ++p1) {
        *p1 = 0;
        cout << *p1 << ' ';
    }
    cout << endl;
    return 0;
}