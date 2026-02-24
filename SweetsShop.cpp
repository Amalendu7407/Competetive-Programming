/*
Sushil went to a sweet shop because he always craves to eat sweets. A laddu costs Rs. 10 while a
jalebi costs Rs. 20.

Initially, Sushil had Rs. X. He bought N laddus. Determine how many jalebis he can buy with the
remaining money.

Input
The first line of input contains two integers X and N — the initial amount of money and the number
of laddus bought.

Output
Output a single integer: the number of jalebis Sushil can buy.

Constraints
1 ≤ X ≤ 100
1 ≤ N ≤ 10
10 × N ≤ X

Sample 1
Input
99 3
Output
3

Explanation
After buying 3 laddus, Sushil has 99 − 30 = 69 rupees, which allows him to buy 3 jalebis.

Sample 2
Input
100 10
Output
0

Explanation
Sushil spent all his money on laddus, so he cannot buy any jalebis
*/


#include<iostream>
using namespace std ; 
int main(){
    int X , N , ladduCost = 0 , remainingRupees = 0 , ans = 0; 
    cin>>X>>N ; 
    ladduCost = N  * 10 ; 
    remainingRupees = X - ladduCost ;
    if(remainingRupees < X && remainingRupees / 20 != 0){
        ans = remainingRupees / 20 ; 
        cout<<ans ;
    }
    else{
        ans = X % N ; // rewmaining money id  0 
        cout<<ans ;  // print 0
    }
}