#include <iostream>
using namespace std;

int main( ) {
    int x = 100;
    int* y = &x;

    cout << x << " " << y << " " << *y  << endl;
    cout << &x; 

}