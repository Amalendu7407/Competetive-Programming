/*
You are given three positive integers X, Y, and Z.

In one operation, you can choose any one of these values and change it to any integer of your
choice.

Find the minimum number of operations required to make the sequence (X, Y, Z) an arithmetic
progression.

Note that (X, Y, Z) is an arithmetic progression if and only if Y − X = Z − Y.

Input
The first line of input contains a single integer T, denoting the number of test cases.
Each test case contains three space-separated integers X, Y, and Z.

Output
For each test case, output a single integer — the minimum number of operations required.
*/

#include<iostream>
using namespace std ; 
int main(){
    int inputs;
    cin>>inputs ; 
    while(inputs--){
        int X , Y , Z ; 
        cin>>X>>Y>>Z; 
        // y - x = z - y
        // 2y = x + z ; 
        if(2*Y == X + Z){
            cout<<0<<endl; 
        }
        else cout<<1<<endl ; 
    }
}