// NESTED TERNARY !!
#include<iostream>
using namespace std;
int main () {
    int x = 6;
    int y = ( x <= 23 ) ? (( x > 12 ) ? x - 4 : x * 4): (( x < 12 ) ? x/4 : x + 4) ;
    cout << y;
    return 0;
}

// PRINT THREE GREATEST NUMBER ( TERNARY NESTED ) !!
#include<iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int greatest = (num1 > num2) 
     ? ((num1 > num3) ? num1 : num3)
     : ((num2 > num3) ? num2 : num3);

    cout << "Greatest number is: " << greatest << endl;

    return 0;
}