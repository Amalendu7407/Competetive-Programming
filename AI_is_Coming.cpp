/*
Each assignment has a difficulty value between 1 and 100 (both inclusive). AI can solve an
assignment if and only if the difficulty of the assignment is less than or equal to 60.
Your current assignment has difficulty X. Determine whether AI is capable of solving your
assignment.

Input
The first and only line of input contains a single integer X, denoting the difficulty of your assignment.

Output
Print YES if AI can solve the assignment, otherwise print NO.

Constraints
1 ≤ X ≤ 100

Sample 1
Input
60

Output
YES

Explanation
The difficulty is ≤ 60, so AI can solve the assignment.

Sample 2
Input
40

Output
YES
*/
#include<iostream>
using namespace std; 
int main(){
    int level ; 
    cout<<"Enter Question level : " ;
    cin>> level ; 
    (level >= 60) ? cout<<"Yes" : cout<<"No" ;
}