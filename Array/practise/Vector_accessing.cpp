#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> v = {1,231,324,34,242,324};
    cout << v[3] <<endl;
    cout << v.at(4) << endl;
    cout << v.at(5) << endl;
    // cout <<v[0] << " "<< v.at(242);
}