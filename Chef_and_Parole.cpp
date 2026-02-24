/*
Chef must spend at least 7 days in prison to be released on parole.

Given the number of days he spent, determine whether Chef will be released on parole.

Input
The first and only line of input consists of an integer X, denoting the number of days spent in prison
by Chef.

Output
Output Yes if Chef will be released on parole, otherwise output No.

Constraints
1 ≤ X ≤ 30

Sample 1
Input
5

Output
No

*/

#include<iostream>
using namespace std ; 
int main(){
    int spendDay ; 
    cin>> spendDay ; 
    if(spendDay >= 7){
        cout<<"Yes" ; 
    }
    else cout<<"No" ; 
}