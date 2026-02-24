/*
Chef knows that N customers will come to his bakery today, and so he has baked M cakes (M ≥ N).

Every customer needs at least one cake; otherwise, they will be unhappy. Further, if a customer is
able to buy two or more cakes, then they will be happy.

Chef wants to maximize the number of happy customers while not having any unhappy customers.
What is the maximum possible number of happy customers?

Input
The first and only line of input contains two integers N and M.

Output
Output the maximum number of happy customers.

Constraints
1 ≤ N ≤ M ≤ 10

Sample 1
Input
3 7

Output
3

Explanation
Chef can make all customers happy by letting each buy 2 cakes, with 1 cake left over.
Sample 2

Input
4 6

Output
2

Explanation
Two customers buy 2 cakes each, and the remaining two customers buy 1 cake each.
*/

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int happy = min(n,m-n);
    cout<<happy<<endl;
    return 0;
}