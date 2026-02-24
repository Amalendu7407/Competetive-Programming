/*
TanMinati and Bhavy participated in the first round of a coding competition organized by the Coding
Club, IIT Ropar during Advitiya.

To qualify for the next round, a participant must defeat both TanMinati and Bhavy.
A participant can defeat another participant by solving at least twice the number of problems as that
participant.

Given that TanMinati solved X problems and Bhavy solved Y problems, determine whether a
participant who solved N problems can participate in the next round.

Input
The first and only line of input will contain three integers N, X, and Y — the number of problems
solved by the participant, TanMinati, and Bhavy respectively.

Output
Output YES if the participant qualifies. Otherwise, output NO.

Constraints
1 ≤ N, X, Y ≤ 10

Sample 1
Input
4 2 2

Output
YES

Explanation
N ≥ 2X and N ≥ 2Y, so the participant defeats both and qualifies.

Sample 2
Input
5 3 2

Output
NO

Explanation
The participant does not defeat TanMinati since N < 2X.
*/



#include<iostream>
using namespace std ; 
int main(){
    int N , X , Y ; 
    cout<<"Enter the values of N , X , Y : " ; 
    cin>>N>>X>>Y ; 
    if((N >=2*X ) && (N >= 2*Y)){
        cout<<"Yes" ; 
    }
    else{
        cout<<"No" ; 
    }
}