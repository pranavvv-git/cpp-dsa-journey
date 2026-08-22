 #include<iostream>
using namespace std;
int main () {

    cout << "===== IF STATEMENT =====" << endl;
    int age = 20;
    if (age >=18) {
        cout << " You are eligible to vote " << endl;
    }

    cout << "===== IF ELSE STATEMENT =====" << endl;
    int number = 7;
    if (number % 2 == 0) {
        cout <<  number << "is an Even Number " << endl;
    }
    else {
        cout << number <<  "is an Odd Number " << endl;
    }

    cout << "===== ELSE IF STATEMENT =====" << endl;
    int marks = 30;
    if (marks >= 90) {
        cout << " Grade A " << endl;
    }
    else if (marks >= 85) {
        cout << "Grade B " << endl;
    }
   else if (marks >= 60) {
    cout << "Grade C " << endl;
   }
   else {
    cout << " Fail " << endl;
   }
   return 0;
}

#include<iostream>
using namespace std;
int main () {
   // int a = 0;
   // if ( a = 0 ) cout << " Jitendra ";
   // else cout << " Anjali ";

   // int x = 4, y = 6;
   // if (x++ || y++) cout << x << y;
   // else cout << " pranav " << endl;

   int x = 0;
   if ( x++ ) cout << " Aniket ";
   else cout << " Sheetal ";
}



    

    


