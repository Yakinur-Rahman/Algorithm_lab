// class Solution {
// public:
//     int maximumProduct(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int length=nums.size();
//         int p1=0,p2=0;
//         p1=nums[length-1]*nums[length-2]*nums[length-3];
//         p2=nums[0]*nums[1]*nums[length-1];
//         if(p1>p2)
//             return p1;
//         else
//         return p2;
//     }
// };

class Solution
{
public:
    int maximumProduct(vector<int> &nums)
    {

        int p;
        sort(nums.begin(), nums.end());
        p = nums[nums.size() - 1] * nums[nums.size() - 2] * nums[nums.size() - 3];
        if (nums[0] * nums[1] * nums[nums.size() - 1] > p)
        {
            p = nums[0] * nums[1] * nums[nums.size() - 1];
        }
        return p;
    }
};
