class Solution {
  public:
    void merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> temp;
        int left=low, right=mid+1;
        while(left<=mid && right<=high) {
            if(nums[left]<=nums[right]) {
                temp.push_back(nums[left]);
                left++;
            }
            else {
                temp.push_back(nums[right]);
                right++;
            }
        }
        while(left<=mid) {
            temp.push_back(nums[left]);
            left++;
        }
        while(right<=high) {
            temp.push_back(nums[right]);
            right++;
        }
        for(int i=low; i<=high; i++) {
            nums[i] = temp[i-low];
        }
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        if(l==r) return;
        int mid = l+(r-l)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
};