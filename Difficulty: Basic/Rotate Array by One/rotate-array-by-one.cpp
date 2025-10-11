// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n = arr.size();
        // printf("%d", arr[n-1]);
        int t=arr[0];
        arr[0] = arr[n-1];
        for(int i=1;i<n;i++){
            int temp=arr[i];
            arr[i]=t;
            t=temp;
        }
        
    }
};