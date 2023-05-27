// class Solution {
// public:
//     vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
//         sort(arr.begin(),arr.end());

//         int l=arr.size();
//         int min_diff=arr[l-1]-arr[0];
//         for(int i=0;i<l-1;i++){
//             if(arr[i+1]-arr[i]<min_diff){
//                 min_diff=arr[i+1]-arr[i];
//             }
//         }
//         vector<vector<int>>ans;

//             for(int i=0;i<l-1;i++){
//                 if(arr[i+1]-arr[i]==min_diff){
//                 vector<int>temp;
//                 temp.push_back(arr[i]);
//                 temp.push_back(arr[i+1]);
//                 ans.push_back(temp);
//              }
//             }

//         return ans;
//     }
// };

class Solution
{
public:
    vector<vector<int>> minimumAbsDifference(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        int min_diff = arr[1] - arr[0];
        vector<int> t;
        vector<vector<int>> ans;
        for (int i = 1; i < arr.size() - 1; i++)
        {
            if (arr[i + 1] - arr[i] < min_diff)
                min_diff = arr[i + 1] - arr[i];
        }
        for (int i = 0; i < arr.size() - 1; i++)
        {
            if (arr[i + 1] - arr[i] == min_diff)
            {
                t.push_back(arr[i]);
                t.push_back(arr[i + 1]);
                ans.push_back(t);
                t.clear();
            }
        }
        return ans;
    }
};
