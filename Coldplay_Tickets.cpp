/*
You want to go to the Coldplay concert along with N of your friends. You are buying tickets for
everyone.

Each ticket costs 5000 INR. Calculate the total amount you need to pay (in INR).

Input
The first and only line of input contains an integer N — the number of friends you have.

Output
Print a single integer: the total cost of all tickets for yourself and your friends.

Constraints
1 ≤ N ≤ 5

Sample 1
Input
1

Output
10000

Explanation
You are buying tickets for yourself and one friend, so total people = 2.
Cost = 2 × 5000 = 10000.
*/

#include<iostream>
using namespace std ; 
int main(){
    int N , me = 1 , ticketPrice = 5000 ; 
    cout<<"Enter N no. of friends : " ; 
    cin>>N ; 
    if(N >= 1 && N <= 5){
        ticketPrice = (me + N)*ticketPrice ; 
        cout<<ticketPrice ; 
    }
    else{
        cout<<"Not possible";
    }
}