/*
The 45-th FIDE Chess Olympiad is currently being held in Budapest, Hungary.
Every round, teams of four players face off against each other in four individual games. A team
receives 1 point for a win, 0.5 points for a draw, and 0 points for a loss.

A team is said to win the round if they receive strictly more points than the opposing team.
In the current round, your favorite team has already won X games, drawn Y games, and lost Z
games. Determine whether they can still win this round.

Input
The first and only line of input contains three space-separated integers X, Y, and Z — the number
of wins, draws, and losses so far.

Output
Print YES if your team can still win the round, otherwise print NO.

Constraints
0 ≤ X, Y, Z ≤ 4
X + Y + Z ≤ 4

Sample 1
Input
1 1 0

Output
Yes

Explanation
Current score is 1 + 0.5 = 1.5, opponent has 0.5. Winning remaining games gives a win.

Sample 2
Input
2 0 2

Output
No
*/

#include<iostream>
using namespace std ; 
int main(){
    int x, y , z ; 
    cin>> x >> y >> z ; 
    int played  = x + y + z ; 
    int remaining  = 4 - played ; 

    float point  = x * 1.0 + y * 0.5;
    float maxPoint = point + remaining;

    if(maxPoint > 2.0){
        cout<<"Yes" ; 
    }   
    else{
        cout<<"No" ; 
    }
}