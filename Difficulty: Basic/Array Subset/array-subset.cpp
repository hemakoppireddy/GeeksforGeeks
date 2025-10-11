class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        unordered_map<int, int> freqA, freqB;
        for(int x : a) freqA[x]++;
        for(int x : b) freqB[x]++;
        for(auto &it : freqB) {
            int val = it.first;
            int cnt = it.second;
            if(freqA[val] < cnt) return false;
        }
        return true;
     
    }
};