#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0;
        int maxSum = INT_MIN;

        for(int val : nums)
        {
            currSum += val;
            maxSum = max(currSum , maxSum);
            if(currSum < 0)
            {
                currSum = 0;
            }
        }
        return maxSum;
        
    }
};

int main()
{
    vector<int> nums = {2,7,11,15};
    Solution obj;

    int result = obj.maxSubArray(nums);
    cout<<"\n\tMaximum subarrray sum is:- "<<result;  

}