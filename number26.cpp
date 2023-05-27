// set<int>s;
//         for(int i=0;i<nums.size();i++)
//         {
//             s.insert(nums[i]);
//         }
//         if(s.size()==nums.size())
//         return false;
//         else
//         return true;

set<int> s;
for (int i = 0; i < nums.size(); i++)
{
    s.insert(nums[i]);
}
if (s.size() != nums.size())
    return true;
else
{
    return false;
}