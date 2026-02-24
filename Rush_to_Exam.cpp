/*
Chef has an exam in the next N hours, and he still has to read M pages of a book to be fully
prepared for the exam.

Every hour, Chef is able to read exactly A pages. Will Chef be able to read all M pages before the
exam? Print Yes or No accordingly.

Input
The first and only line contains three integers N, M and A.

Output
Print Yes if Chef will be able to finish reading all M pages, and No otherwise.

Constraints
1 ≤ N ≤ 24
1 ≤ M ≤ 100
1 ≤ A ≤ 10

Sample 1
Input
3 6 2

Output
Yes

Explanation
Chef can read 2 × 3 = 6 pages, which is exactly the number required.

Sample 2
Input
3 7 2

Output
No

Explanation
Chef can read only 6 pages, which is less than the required 7 pages.
*/


#include<iostream>
using namespace std ; 
int main(){
    int hour , pages , readPages ; 
    cout<<"Enter total Hour , Pages and redingpages : " ; 
    cin>>hour>>pages>>readPages ; 
    if(hour*readPages > pages){
        cout<<"Yes" ; 
    }
    else{
        cout<<"No" ; 
    }
}