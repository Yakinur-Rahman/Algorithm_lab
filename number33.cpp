// class Solution {
// public:
//     double trimMean(vector<int>& arr) {
//          sort(arr.begin(),arr.end());
//     double sum=0;
//     int length=arr.size();
//     int l=(length*5)/100;
//     for(int i=l;i<arr.size()-l;i++){
//         sum+=arr[i];
//     }
//     length=length-(2*l);
//      return (sum/(double)length);
        
//     }
// };

class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        double l = arr.size();
        double cut_length = l*(5.0/100.0),sum=0;
        for(auto i=cut_length;i<l-cut_length;i++)
        {
            sum+=arr[i];
        }
        return (sum/(l-2*cut_length));

    }
};