

class Solution {
  public:
    long long countSubArrayProductLessThanK(const vector<int>& arr, int n,long long k) {
        long long left=0, right=0, count=0;
        long long product=1;
        while(left<n && right<n) {
            product *= arr[right];
            while(left<=right && product>=k && left<n && right<n) {
                product /= arr[left];
                left++;
            }
            if(product<k){
                count+=(right-left+1);
            }
            right++;
        }
        return count;
    }
};