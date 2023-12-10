/**
 * Problem: One day, Omar and Havva went to the ice cream shop. There are N different types of ice cream and the shop has Ai
 * kilogram of each type. Omar wants to eat lots of ice cream, therefore he decided to eat all of the types of ice cream and 
 * leave one type to Havva. Since he wants to eat lots of ice cream, could you print the maximum amount of ice cream that Omar can eat?
 * 
 * For clarity, do not forget to add comments on your code.
 * 
 * 10.12.23
*/
#include <bits/stdc++.h>

using namespace std;
int main() 
{
    int n;
    cin >> n;
    vector<int> a(n);
    
    if(n > 0)
    {   
        // take the values
        for(int i = 0; i < n; i++) cin >> a[i];
        
        int total = 0;
        int min = a[0];

        // calculate total and find min
        for(int i = 0; i < n; i++)
        {
            total = total + a[i];
            
            if(min > a[i])
            {
                min = a[i];
            }
        }
        
        // min value goes to Havva, so Omar gets the rest.
        cout << (total - min);
    }
    else
    {
        cout << "You did not enter a valid value." << endl; 
    }
    
    return 0;
}