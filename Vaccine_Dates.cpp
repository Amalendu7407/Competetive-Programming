/*
Chef has taken his first dose of vaccine D days ago. He may take the second dose no less than L
days and no more than R days since his first dose.

Determine if Chef is too early, too late, or in the correct range for taking his second dose.

Input
The first line contains T, number of test cases. Then the test cases follow.
Each test case contains a single line of input, three integers D, L, R.

Output
For each test case, print a single line containing one string:- "Too Early" if it's too early to take the vaccine- "Too Late" if it's too late to take the vaccine- "Take second dose now" if it's the correct time to take the vaccine

Constraints
1 ≤ T ≤ 105
1 ≤ D ≤ 109
1 ≤ L ≤ R ≤ 109

Sample
Input
4
10 8 12
14 2 10
4444 5555 6666
8 8 12

Output
Take second dose now
Too Late
Too Early
Take second dose now
*/

#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int d,l,r;
        cin>>d>>l>>r;
        if(d<l){
            cout<<"Too Early"<<endl;
        }else if(d>r){
            cout<<"Too Late"<<endl;
        }else{
            cout<<"Take second dose now"<<endl;
        }
    }
    return 0;
}