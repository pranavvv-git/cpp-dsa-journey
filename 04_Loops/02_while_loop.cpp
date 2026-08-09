#include <iostream>
using namespace std;
int main() {
    //Write a C++ program that takes an integer N as input and prints all numbers from 1 to N using a while loop.
    int n;
    cin >> n;

    cout << " ===== While Loop =====" << endl;
    int i = 1;


    while (i <= n){
        cout << i << endl;
        i++;
    }
    return 0;

}
