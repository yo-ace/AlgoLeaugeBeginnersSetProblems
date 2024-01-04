/**
 * 04.01.24
 * 
 * This code is from algoleauge.com, you can see the solution and further examples in the website. 
 * 
 * link: https://algoleague.com/contest/algorithm-training-beginner-set/problem/list
 * 
 * Problem: 
 * 
 * Rose just staged a coup against Eve and took control of inzva, Kundura City's most dangerous neighborhood, 
 * also known as The Pit. Aliens attacked The Pit while algorithmists were cheering “inzva is our home, Rose is our mother!”. 
 * There are N flying saucers who are attacking the hood, so Rose needs the list of all binary strings of length N.
 * Help Rose, because inzva is our family and family is everything.
 * 
 * It is always best practice to add comments on your code. Try to write as neatly as possible. 
 * 
 * @author Irmak İmdat
*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int twoToPowerOfN = pow(2, n);
    string binary = "";

    for(int i = 0; i < twoToPowerOfN; i++) // line
    {
        int divident = twoToPowerOfN;
        int count = n;

        while(count > 0) // column
        {
            divident = divident / 2;

            if(i / divident % 2 == 0)
            {
                cout << 0;
            }
            else
            {
                cout << 1;
            }

            count--;
        }

        /*
            Think of this as a 2d matrix. We are evaluating each coordinate (a specific column of a line) individually.
            Least significant bit (the one on the right) should change in each line, while the one on its left should 
            change once in every two lines. This logic continues until we print all possible outcomes. The if else sta-
            tement determines whether a coordinate is zero or 1. 
        */

        cout << endl;
    }   
    
    return 0;
}