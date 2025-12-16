#include<iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    int *pa = &a;
    int *pb = &b;
    cout << pb;
    return 0;
}