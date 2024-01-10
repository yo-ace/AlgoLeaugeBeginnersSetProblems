/**
 * 10.01.24
 * 
 * This code is from algoleauge.com, you can see the solution and further examples in the website. 
 * 
 * link: https://algoleague.com/contest/algorithm-training-beginner-set/problem/list
 * 
 * Problem: 
 * 
 * New stickers have arrived at inzva Sanctuary. But not enough stickers for every participant. 
 * So, Havva decides to ask a question to participants and give a sticker for the right answer. 
 * Havva gives the number N to participants and asks them to multiply all the digits except zeros. 
 * Then asks them to apply the same operation to the result, until only one digit left. The right
 * answer is just that number. Yasin really wants those stickers, can you help Yasin to get a sticker?
 * (if you didn't understand the problem you can check out the website)
 * 
 * It is always best practice to add comments on your code. Try to write as neatly as possible. 
 * 
 * @author Irmak İmdat
*/
#include <iostream>
using namespace std;

int main()
{
    long long int input;

    cin >> input;

    bool stop = false;

    while(!stop)
    {
        long long int calculate = 1;

        while(input >= 10) // Multiply the digits of the input.
        {
            if(input % 10 != 0)
                calculate *= input % 10;

            input = input / 10;
        }

        calculate *= input; // Final digit was not included in the while loop above.
        input = calculate;  // We will print final value of the input.

        if(calculate / 10 == 0) // Stop if there is 1 digit.
            stop = true;
    }

    cout << input;

    // We used long long int data type because the constraint is given as 1 <= N <= 10^18
    
    return 0;
}