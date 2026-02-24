/*
The Exunites are preparing for the 2025 edition of their annual event, Exun!
After a long day of work, they go to the canteen to buy refreshments. At the canteen, Chef is selling
N pizzas. However, the Exunites only require K pizzas.

Each pizza costs R rupees. Chef wants to know: after selling K pizzas to the Exunites, how much
revenue can he obtain by selling all his remaining pizzas?

Input
The first and only line of input contains three space-separated integers N, K, and R — the number
of pizzas Chef is selling, the number of pizzas required by the Exunites, and the cost of each pizza.

Output
Print a single integer — the amount of money (in rupees) Chef's remaining pizzas can sell for.

Constraints
1 ≤ K ≤ N ≤ 100
1 ≤ R ≤ 100

Sample 1
Input
10 6 15

Output
60

*/

#include<iostream>
using namespace std ; 
int main(){
    int numberOfPizza , requiredPizzas , pizzaPrice ; 
    cout<<"enter numberOfPizza , requiredPizzas, Price : " ; 
    cin>>numberOfPizza>>requiredPizzas>>pizzaPrice ; 
    int remainingPizza = 0 ; 
    remainingPizza = numberOfPizza - requiredPizzas ; 
    pizzaPrice *= remainingPizza ; 
    cout<< pizzaPrice ; 
}