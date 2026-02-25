#include<iostream>
using namespace std  ; 
int main(){
    int input ; 
    cin>>input ; 
    while(input--){
        int n , x ; 
        cin>>x>>n;
        if(n%2==0){
            cout<<0<<endl ; 
        }
        else cout<<x <<endl; 
    }
}