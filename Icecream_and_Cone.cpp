/*
Chef has X cones and Y scoops of ice cream. Each ice cream cone requires exactly one cone and
one scoop of ice cream.

Your task is to determine the maximum number of ice cream cones Chef can make with the
available ingredients.

Input
The input contains two integers X and Y — the number of cones and the number of ice cream
scoops respectively.

Output
Output a single integer — the maximum number of ice cream cones Chef can make.

Constraints
1 ≤ X ≤ 100
1 ≤ Y ≤ 100

Sample
Input
10 5
Output
5

Input:
99 100
Output:
99

Input:
15 60
Output:
15
Explanation
Chef can make ice cream cones equal to the minimum of available cones and scoops, which is 5.
*/

#include<iostream>
using namespace std ; 
int main(){
    int X , Y ; 
    cin>>X>>Y ;
    cout<<min(X , Y) ; 
}