/**
 * 10.12.23
 * 
 * This code is from algoleauge.com, you can see the solution and further examples in the website. 
 * 
 * link: https://algoleague.com/contest/algorithm-training-beginner-set/problem/list
 * 
 * Problem: 
 * 
 * Harun and Sami are very good friends. They play a game for N rounds. In each round, Harun or Sami wins. 
 * In other words, a round never ends in a draw. To win the game, you need to win more rounds than your opponent. 
 * Unfortunately, they only remember the result of the first K rounds. Also, both of them claim to have won the game. 
 * Therefore, you need to determine if anyone has definitely won the game or not by considering the first K rounds.
 * 
 * It is always best practice to add comments on your code. Try to write as neatly as possible. 
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    int k;

    cin >> n;
    cin >> k;

    string winners;

    cin >> winners;

    int harun = 0;
    int sami = 0;

    for(char c : winners)
    {
        if(c == 'H')
            harun++;
        else
            sami++;
    }

    // add the remaining rounds to the smaller value,
    // if it is still smaller, it is certain that bigger one won 
    if(harun > sami)
    {
        sami += (n - k); 
        
        if(harun > sami)
            cout << "Harun";
        else
            cout << "Cilek";
    }
    else if(sami > harun)
    {
        harun += (n - k);  

        if(sami > harun)
            cout << "Sami";
        else
            cout << "Cilek";
    }
    else
        cout << "Cilek";

    return 0;
}