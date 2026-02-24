/*
Chef, being an international powerlifter, has participated in a powerlifting competition.

The competition consists of three rounds: squat, bench press, and deadlift. In each round, the goal
is to lift maximum weight, and Chef gets two attempts.

For each round, the score of the best attempt is considered. The total score is calculated as the
sum of the best scores of all three rounds.

You are given Chef's scores in both attempts of rounds 1, 2, and 3 as A1, A2, B1, B2, C1, and C2.
Find Chef's total score in the competition.

Input
The first and only line of input consists of six space-separated integers A1, A2, B1, B2, C1, and C2.
Output
Output a single integer denoting Chef's total score in the competition.

Constraints
200 ≤ A1, A2, B1, B2, C1, C2 ≤ 300

Sample 1
Input
250 240 205 217 296 299
Output
766

Explanation
Round 1 best score = 250
Round 2 best score = 217
Round 3 best score = 299
Total = 250 + 217 + 299 = 766

Sample 2
Input
207 220 200 200 300 289
Output
720
*/
#include<iostream>
using namespace std ; 
int main(){
    int A1 , A2 , B1 , B2 , C1 , C2 ; 
    cin>>A1>>A2>>B1>>B2>>C1>>C2 ; 
    if(A1 >= 200 && C2 <= 300){
        int total = max(A1 , A2) + max(B1 , B2) + max(C1 , C2) ; 
        cout<<total ; 
    }
}