/**
 * 10.12.23
 * 
 * IMPORTANT: This code is from algoleauge.com, you can see the solution and further examples in the website. 
 * 
 * link: https://algoleague.com/contest/algorithm-training-beginner-set/problem/list
 * 
 * Problem: 
 * 
 * Strange things are happening in inzva. The word machine that causes these strange things is destroying 
 * the words that are new to inzva. If identical letters are consecutive, this machine deletes consecutive
 * and identical letters of a received word, leaving only one of the identical letters. In other words, 
 * identical characters will not be consecutive in the arranged word. Your task is to print the final version 
 * of the word that was changed by the machine.
 * 
 * It is always best practice to add comments on your code. Try to write as neatly as possible.  
*/
#include <iostream>
#include <string>

using namespace std;
int main()
{
    int N;
    cin >> N;

    string word;
    cin >> word;

    string newString(1, word[0]);

    // notice N - 1 instead of N
    // that is because loop checks for i + 1
    for(int i = 0; i < N - 1; i++)
    {
        char prev = word[i];

        // check if the character is the same with the prev,
        // if so, do not add it to the new string.
        if(prev != word[i + 1])
        {
            newString = newString + word[i + 1];
        }
    }

    cout << newString << endl;

    return 0;
}