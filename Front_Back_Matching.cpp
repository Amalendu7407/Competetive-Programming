/*
You are given a string S of length N. The string contains only lowercase English letters.
You can freely rearrange the characters of S however you like.

After rearrangement, is it possible to make the first and last characters of S equal?

Input
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two lines of input.

The first line of each test case contains a single integer N — the length of string S.
The second line contains the string S of length N.

Output
For each test case, output on a new line the answer: either Yes or No, depending on whether it's
possible to rearrange the string appropriately or not.

Constraints
1 ≤ T ≤ 100
2 ≤ N ≤ 100

The string contains only lowercase English letters.

Sample
Input
4
3
aka
4
nope
5
pluto
5
foggy

Output
Yes
No
No
Yes
*/


#include<iostream>
#include<string>
using namespace std ; 
int main(){
    int input;
    cout<<"Enter input count : " ; 
    cin>> input ; 
    while(input--){
        int N ; 
        cin>>N ; 
        string str ; 
        cin>>str ; 

        bool present = false ; 
        for(int i = 0 ; i < N ; i++){
            for(int j= i + 1 ; j < N ; j++){
                if(str[i] == str[j]) {
                    present = true;
                    break ; 
                }
            }
            if(present) break ; 
        }
        if(present == true){
            cout<<"Yes"<<endl ; 
        }
        else{
            cout<<"No"<<endl ; 
        }
    }
}