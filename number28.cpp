class Solution
{
public:
    int heightChecker(vector<int> &heights)
    {
        vector<int> t = heights;
        sort(t.begin(), t.end());
        int cnt = 0;
        for (int i = 0; i < heights.size(); i++)
        {
            if (t[i] != heights[i])
                cnt++;
        }
        return cnt;
    }
};