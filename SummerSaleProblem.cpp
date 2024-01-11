/**
 * 11.01.24
 * 
 * This code is from algoleauge.com, you can see the solution and further examples in the website. 
 * 
 * link: https://algoleague.com/contest/algorithm-training-beginner-set/problem/list
 * 
 * Problem: 
 * 
 * It's the time of Legendary Summer Sales! Aziz has been saving up money for a whole year to buy a 
 * good game. Aziz has K dollars and N different game options to buy one. An array of integers S is 
 * given Si represents the cost of ith game. He doesn’t want to buy a very cheap game nor does he want 
 * to exceed his budget too much by borrowing money from his parents. In other words, Aziz has a tolerance 
 * number of T, which means he has to buy a game that costs in the range [k−t, k+t]. For instance, 
 * if he has 10 dollars and has a tolerance of 5, he can buy a game that costs 5 or 15 dollars but 
 * he can not buy a game that costs less than 4 or more than 16 dollars. Your task is to find the 
 * number of different games Aziz can buy for a given T.
 * 
 * It is always best practice to add comments on your code. Try to write as neatly as possible. 
 * 
 * @author Irmak İmdat
*/
#include <iostream>
using namespace std;

int main()
{
    int numberOfGames;
    cin >> numberOfGames;

    int savedMoney;
    cin >> savedMoney;

    int gameCosts[numberOfGames];
    for(int i = 0; i < numberOfGames; i++)
        cin >> gameCosts[i];

    int numberOfQueries;
    cin >> numberOfQueries;

    int queries[numberOfQueries];
    for(int i = 0; i < numberOfQueries; i++)
        cin >> queries[i];

    for(int k : queries) 
    {
        // We calculate the number of games he can buy for each k value.
        
        int availableGames = 0;

        for(int gameCost : gameCosts)
        {
            if(gameCost <= savedMoney + k && gameCost >= savedMoney - k)
            {
                availableGames++;
            }
        }

        cout << availableGames << endl;
    }

    return 0;
}