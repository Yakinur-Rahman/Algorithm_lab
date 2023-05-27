// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         int temp=0,ans;
//         sort(nums.begin(),nums.end(),greater<int>());
        
//         for(auto i=nums.begin();i<nums.end();i++){
//             temp++;
//             if(temp==k){
//                 ans=*i;
                
//                 return ans;
//             }   
//         }
//          return 0;
//     }
// };

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        return nums[k-1];
    }
};