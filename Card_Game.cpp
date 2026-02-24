/*
Chef throws a card numbered X. From the remaining cards, Chefina must choose a card such that
the sum of the chosen card number and X is even.
Your task is to find the number of such possible choices.
Input
The first line of input contains a single integer T, denoting the number of test cases.

Each test case consists of two space-separated integers N and X — the number of cards and the
card thrown by Chef.

Output
For each test case, output a single integer — the number of valid choices for Chefina.
Constraints
1 ≤ T ≤ 105
2 ≤ N ≤ 1000
1 ≤ X ≤ N

Sample
Input
3
3 1
2 2
5 4

Output
1
0
1

*/

#include<iostream>
using namespace std ; 
int main(){
    int input;
    cout<<"Enter input number : " ; 
    cin>>input ; 
    while(input--){
        int n , x ; 
        cin>>n>>x;
        int even = n / 2 ;
        int odd = n - odd ; 
        if(x % 2 == 0){
            cout<<even - 1 <<endl;
        }
        else{
            cout<<odd- 1<<endl ; 
        }
    }
}