#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int> nums) {
        int ans = 0;

        for(int val : nums)
        {
            ans = ans ^ val;
        }   
        return ans;
    }
};

int main()
{
    Solution obj;
    int x;
    vector <int> nums = {4,1,2,1,2};

    x = obj.singleNumber(nums);
    cout<<"\n\tThe Unqiue Number is: "<<x;


    return 0;
}