/**
 * 12.01.24
 * 
 * This code is from algoleauge.com, you can see the solution and further examples in the website. 
 * 
 * link: https://algoleague.com/contest/algorithm-training-beginner-set/problem/list
 * 
 * Problem: 
 * 
 * You are given a number X, you are expected to calculate the sum of the numbers which are lower than 
 * or equal to X, whose hundreds digit equals to 3.
 * 
 * It is always best practice to add comments on your code. Try to write as neatly as possible. 
 * 
 * @author Irmak İmdat
*/
#include <iostream>
using namespace std;

int main()
{
    int numberOfEntries;
    cin >> numberOfEntries;

    int entries[numberOfEntries];
    for(int i = 0; i < numberOfEntries; i++)
        cin >> entries[i];

    for(int number : entries)
    {
        long long int sumOfTheRange = (300 + 399) * 100 / 2;

        int upperBound = 399; 

        long long int sum = 0; 

        while(upperBound < number) 
        {
            /*
                Calculate 300 to 399, 1300 to 1399, 2300 to 2399 till 
                the upper bound is not smaller than number anymore.
            */

            sum += sumOfTheRange;
            upperBound += 1000; 
            // upperbound is first 399, then 1399, then 2399...
            sumOfTheRange += 100000; 
            
            /*
                Each time the value we add will be 100 * 1000 more than the previous one. 
                That is because 300 + 301 + ... + 399 differs from 1300 + 1301 +... + 1399 
                by adding 1000 more for each value.
            */
        } 

        /*
            Finally in this step, if the value is smaller than the upperbound but yet bigger
            than upperbound - 99, (for example if number is 1350, it is smaller than the upper
            bound but we still have numbers to add) we continue by adding those.
        */
        if(upperBound - 100 < number)
        {
            int numberOfTerms = (number - (upperBound - 99)) + 1;
            sum += ((number + (upperBound - 99)) * numberOfTerms / 2);
        }

        cout << sum << endl;
    }

    /*
        Obviously you can simply choose to use a for loop for each number, something like this:

        for(int number : entries)
        {
            int sum = 0;

            for(int i = 0; i <= number; i++)
            {
                if(i % 1000 <= 399 && i % 1000 >= 300)
                {
                    sum += i;
                }
            }

            cout << sum << endl;
        }

        This method is safe to choose, however calculations are much simpler with the first method.
    */
}

/* 
    I should also note that this solution did not pass testcase 3 and 6. I could not figure it out
    yet but I will update the code if I do. 
*/