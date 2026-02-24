/*
Chef has forgotten his ice cream cone in the sun, and it is melting.

Currently, there is X grams of ice cream in his cone, and every minute that the cone is left out, Y
grams of ice cream melt and are lost.

If Chef comes back after N minutes, how much ice cream is still left for him?

Input
The first line of input will contain a single integer T, denoting the number of test cases.
The first and only line of each test case contains three integers X, Y and N.

Output
For each test case, output on a new line the amount of ice cream left after N minutes.

Constraints
1 ≤ T ≤ 100
1 ≤ X, Y, N ≤ 100

Sample
Input
3
5 1 2
5 1 7
50 5 9

Output
3
0
5
*/


#include<iostream>
using namespace std ; 
int main(){
    int input ; 
    cout<<"Enter input value : " ; 
    cin>> input ; 
    while(input--){
        int X , Y , N ; 
        cout<<"Enter (X , Y , N) values : " ; 
        cin>>X>>Y>>N ; 
        if(X > (N*Y) && (X > (X -(N*Y)))){
            cout<<X -(N*Y); 
        }
        else{
            cout<<0 ; 
        }
    }
}