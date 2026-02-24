/*
Input
The first line contains a single integer t (1 ≤ t ≤ 162) — the number of test cases.
The description of each test case consists of three integers a, b, c (1 ≤ a, b ≤ 9, −8 ≤ c ≤ 18).
The additional constraint on the input: it will be generated so that exactly one of the two equations
will be true.

Output
For each test case, output either + or - on a new line, representing the correct equation.

*/

// code

#include <iostream>
using namespace std ; 
int main() {
    int totalInput ; 
    cout<<"Enter Total input : " ; 
    cin >>totalInput;
    while(totalInput--){
        int a , b , c ; 
        cout<<"enter a b c values : " ; 
        cin >>a >> b >> c ; 
        if(a + b == c){
            cout<<"+"<<endl ; 
        }
        else{
            cout<<"-"<<endl ; 
        }
    }

    return 0;
}