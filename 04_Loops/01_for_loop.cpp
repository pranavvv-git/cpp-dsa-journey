#include<iostream>
using namespace std;
int main () {
    cout << " ===== FOR LOOPS ===== " << endl;
    //Take an integer n as input from the user and print all numbers from 1 to n using a for loop.
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << i << endl;
    }
    return 0;
}