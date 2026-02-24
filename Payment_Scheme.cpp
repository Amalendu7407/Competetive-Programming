/*
The shop offers Chef two payment schemes:
1. Pay 100 coins immediately, and then pay X coins every week for the next four weeks.
2. Pay 300 coins immediately, with no future payments required.

Find the minimum possible number of coins Chef needs to pay if he chooses the payment scheme
appropriately.

Input
The input contains a single integer X — the required weekly payment for the first payment scheme.

Output
Output a single integer: the minimum possible number of coins Chef needs to pay.

Constraints
1 ≤ X ≤ 100

Sample 1
Input
8

Output
132

Explanation
First scheme costs 100 + 4 × 8 = 132, which is cheaper than 300.
*/

#include<iostream>
using namespace std ; 
int main(){
    int x ; 
    cout<<"enter X : " ; 
    cin >> x ; 
    int total = 100 + x * 4 ; 
    if(total >= 300){
        cout<<300 ; 
    }
    else{
        cout<<total ; 
    }
}