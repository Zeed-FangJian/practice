#include<iostream>
#include<vector>
using namespace::std;
int main() {
    int num = 10;
    int *p1 = &num;
    cout << "num value is:" << num << endl;
    cout << "address of num is:" << p1 << endl;
    *p1 = 100;
    cout << "new num value is:" << num << endl;
    cout << "address of num is:" << p1 << endl;
    int num2 = 20;
    p1 = &num2;
    cout << "p1 is changed to:" << p1 << endl;
    return 0;
}