// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         set<int>s1;
//         set<int>s2;
//         for(auto &i:nums1){
//             s1.insert(i);
//         }
//         for(auto &j:nums2){
//             s2.insert(j);
//         }
//         vector<int>temp;
//         for(auto &k:s1){
//             if(!(s2.end()==s2.find(k)))
//             temp.insert(temp.end(),k);
//         }
//       return temp;
//     }
// };

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        set<int> s1(nums1.begin(), nums1.end());
        set<int> s2(nums2.begin(), nums2.end());
        vector<int> temp;
        for(auto i:s1){
            auto it = find(s2.begin(), s2.end(), i);
            if (it != s2.end())
            {
                temp.push_back(i);
            }
        }
        return temp;
    }
};