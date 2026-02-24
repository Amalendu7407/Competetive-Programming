/*
Chef is buying spectacles and is deciding which frame to purchase.
Chef has two choices:

- A plastic frame that costs X rupees
- A metal frame that costs Y rupees

Chef will buy the metal frame if and only if it costs at most twice the price of the plastic frame.
Otherwise, he will buy the plastic frame.

Input
The first and only line of input contains two integers X and Y — the prices of the plastic and metal
frames respectively.

Output
Print METAL if Chef buys the metal frame, otherwise print PLASTIC.

Constraints
1 ≤ X ≤ 2000
1 ≤ Y ≤ 2000

Sample 1
Input
499 999

Output
PLASTIC
*/

#include<iostream>
using namespace std ; 
int main(){
    int X , Y ; 
    cin>>X>>Y ; 
    if(X*2 < Y){
        cout<<"PLASTIC" ; 
    }
    else{
        cout<<"METAL" ; 
    }
}