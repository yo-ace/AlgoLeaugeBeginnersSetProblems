/**
 * 10.12.23
 * 
 * IMPORTANT: This code is from algoleauge.com, you can see the solution and further examples in the website. 
 * 
 * link: https://algoleague.com/contest/algorithm-training-beginner-set/problem/list
 * 
 * Problem: 
 * 
 * Usain Bolt is a world famous athlete. In his whole career, he broke lots of new records. 
 * The points he got from the races he entered are given. The task is find how many times Usain Bolt 
 * broke his own record.
 * 
 * It is always best practice to add comments on your code. Try to write as neatly as possible. 
*/
#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int a[N];
    for(int i = 0; i < N; i++) cin >> a[i];

    int max = a[0];
    int count = 0; // # of times record is broken, currently zero

    // notice that the upper limit is N - 1 instead of N, 
    // because inside the loop we have a[i + 1] 
    for(int i = 0; i < N - 1; i++)
    {
        int next = a[i + 1];

        // current max will be the new record, so increment the count
        if(max < next)
        {
            count++;
            max = a[i + 1];
        }
    }

    cout << count;
    return 0;
}