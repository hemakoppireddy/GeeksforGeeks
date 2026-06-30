class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> res;
        res.push_back(arr[n-1]);
        int maxi = arr[n-1];
        for(int i=n-2; i>=0; i--) {
            if(arr[i]>=arr[i+1] && arr[i]>=maxi) {
                res.push_back(arr[i]);
                maxi = arr[i];
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};