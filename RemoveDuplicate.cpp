#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) 
{
    //nums is given in a sorted non-decreasing form

    if(nums.size() == 0)
        return 0;

    int count = 1;
    int k = 1;

    for(int i = 1; i < nums.size(); i++)
    {
        if(nums[i - 1] == nums[i])
        {
            count++;
        }
        else
        {
            count = 1;
        }

        if(count > 2)
        {
            for(int j = i; j < nums.size() - 1; j++)
            {
                nums[j] = nums[j + 1];
            }
            i--;
            nums[nums.size() - 1] = nums[0];
        }
        else
            k++;
    }

    return k;
}

int main()
{
    vector<int> nums = {1,1,1,2,2,3,3};
    removeDuplicates(nums);
    return 0;
}