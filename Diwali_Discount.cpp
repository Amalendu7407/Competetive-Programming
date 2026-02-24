/*
Chef is trying to buy a Diwali gift for Rs. A, and he has a voucher worth Rs. B.

Chef will have to pay the remaining amount after applying the voucher. If the voucher's value
exceeds the gift's value, Chef will not have to pay anything.

Find the amount that Chef will pay for buying the gift.

Input
The first and only line of input contains two integers A and B — the price of the gift and the value of
the voucher.

Output
Output a single integer — the amount paid by Chef.

Constraints
1 ≤ A, B ≤ 5000

Sample 1
Input
3000 1000

Output
2000

Explanation
Chef pays 3000 − 1000 = 2000 rupees.

Sample 2
Input
1000 5000

Output
0
Explanation
The voucher exceeds the gift price, so Chef pays nothing
*/

#include<iostream>
using namespace std ; 
int main(){
    int A,B ; 
    cin>>A>>B ; 
    int payingAmmount = 0 ;
    if(A > B){ 
        payingAmmount = A - B ; 
    }
    else{
        payingAmmount = 0 ; 
    }
    cout<<payingAmmount ; 
}