//  vector<int>temp;
       
//        for(auto &i:nums){
//          int cnt=0;
//           for(auto &j:nums){
//           if(j<i)
//           cnt++;
//        }
//         temp.insert(temp.end(),cnt);
//      }
//      return temp;

class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        map<int, int> a;
        for (int i = 0; i < nums.size(); i++)
        {
            a[nums[i]]++;
        }
        int sum = 0;
        map<int, int> b;
        for (auto i : a)
        {
            b[i.first] = sum;
            sum += i.second;
        }
        vector<int> temp2;
        for (int i = 0; i < nums.size(); i++)
        {
            temp2.push_back(b[nums[i]]);
        }
        return temp2;
    }
};