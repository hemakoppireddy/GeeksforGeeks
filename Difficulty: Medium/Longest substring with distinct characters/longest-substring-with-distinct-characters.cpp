class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        int n = s.size();
        if(n==0 || n==1) return n;
        vector<bool> vis(26, false);
        int left =0, right=0, maxlen=INT_MIN;
        while(left<n && right<n) {
            while(vis[s[right]-'a']==true && left<=right){
                vis[s[left]-'a']=false;
                left++;
            }
            vis[s[right]-'a']=true;
            maxlen = max(maxlen, right-left+1);
            right++;
        }
        return maxlen;
    }
};
