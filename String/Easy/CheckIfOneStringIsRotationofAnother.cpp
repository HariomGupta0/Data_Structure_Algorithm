#include <iostream>
using namespace std;

int main() {
    string s = "ginger";
    int n = s.size();

    //Code for one rotation of string
    for (int i=0;i<n;i++) {
        //shifting char to its left 
        //Shifting first element of string to last 
        char c = s[i];
        char l = s[n-1];

        if (i == n-1) {
            s[n-1] == c;
            
        }
        s[i] = s[i+1];


    }

    cout << s;
}