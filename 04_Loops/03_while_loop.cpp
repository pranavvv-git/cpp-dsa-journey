#include <iostream>
using namespace std;
int main() {
    // Write a C++ program that takes an integer N as input and calculates the sum of all numbers from 1 to N using a while loop.
    int n;
    cin >> n;

    cout << " ===== While loop ===== " << endl;
    int i = 1;
    int sum  = 0;
    while (i <= n) {
         sum = sum + i;
         i++;
    }

        cout << sum << endl;
        
    return 0;
}