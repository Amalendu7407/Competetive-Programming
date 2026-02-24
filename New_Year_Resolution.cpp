/*
To start the year 2026 off, Chef made a resolution to exercise daily. He decided to do exactly X
push-ups every day.
If he sticks to his resolution, how many push-ups will he do in the month of January?
Note that the month of January has 31 days.

Input
The first and only line of input will contain a single integer X, denoting the number of push-ups Chef
does every day.

Output
Output a single integer: the number of push-ups Chef will do in January.

Constraints
1 ≤ X ≤ 100

Sample 1
Input
5

Output
155

Explanation
Doing 5 push-ups every day, Chef will do 5 × 31 = 155 push-ups in January.
*/


#include<iostream>
using namespace std ;
int main(){
    int PerdayPushup ; 
    cout<<"Enter pushup count : " ; 
    cin>>PerdayPushup ; 
    int days = 31 ; 
    int totalPushup = 31 * PerdayPushup ; 
    cout<<totalPushup ; 
}