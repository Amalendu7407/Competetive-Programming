/*
IOI 2024 is being held in Egypt, starting from the 1-st of September and ending on the 8-th of
September.

Given a date X in September, output YES if IOI is ongoing then, otherwise NO.

Input
The first and only line of input contains one integer X — the date in September.

Output
Output either YES or NO, depending on whether IOI is ongoing on September X.

Constraints
1 ≤ X ≤ 30

Sample 1
Input
8
Output
YES

Explanation
IOI is said to be ongoing even on its last day.

Sample 2
Input
9
Output
NO

Explanation
IOI already ended on 8-th of September.

Sample 3
Input
3
Output
YES
*/

#include<iostream>
using namespace std ; 
int main(){
    int X ; 
    cin>>X ; 
    if(X <= 8) cout<<"Yes" ; 
    else cout<<"No" ; 
}