/**
 * 09.01.24
 * 
 * This code is from algoleauge.com, you can see the solution and further examples in the website. 
 * 
 * link: https://algoleague.com/contest/algorithm-training-beginner-set/problem/list
 * 
 * Problem: 
 * 
 * Arda has got in his house N number of candies for the M number of children visiting his house on Halloween. 
 * The children hang around as a group. It means whenever Arda's bell rings, M number of children appears in 
 * front of his door. Arda himself doesn't like candies. So he wants to give all candies in his house to the children. 
 * Arda, who wants every child who comes to visit him to have an equal number of candies, will not give candy to any 
 * child if it is not possible to distribute the candies fairly.
 * 
 * It is always best practice to add comments on your code. Try to write as neatly as possible. 
 * 
 * @author Irmak İmdat
*/
#include <iostream>
using namespace std;

int main()
{
    int numberOfChildren;
    cin >> numberOfChildren;

    int candies[numberOfChildren];

    for(int i = 0; i < numberOfChildren; i++)
        cin >> candies[i];

    int numberOfCandies;
    cin >> numberOfCandies;

    int max = 0;

    for(int a : candies)
    {
        if(a > max)
        {
            max = a;
        }
    }

    bool isEqual = true;

    /*
        We found the max, now we are making the remaining candies equal to the max.
        If we can do this with the candy we have, we will check the second condition.
        If we don't have enough candy, isEqual will be false.
    */
    for(int i = 0; i < numberOfChildren && numberOfCandies > 0; i++)
    {
        while(candies[i] < max && numberOfCandies > 0)
        {
            candies[i]++;
            numberOfCandies--;
        }

        if(candies[i] != max)
        {
            isEqual = false;
        }
    }

    /*
        Now, if remaining candies can be distributed to the children equally, 
        we will print 1. Else, we will print 0.
    */
    if(numberOfCandies % numberOfChildren == 0 && isEqual)
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }

    return 0;
}
