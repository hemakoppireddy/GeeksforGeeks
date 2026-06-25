class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if(low<high) {
            int p = partition(arr, low, high);
            quickSort(arr, low, p-1);
            quickSort(arr, p+1, high);
        }
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        // code here
        int pivote = arr[low];
        int i=low, j=high;
        while(i<j) {
            while(arr[i]<=pivote && i<high) {
                i++;
            }
            while(arr[j]>pivote && j>low) {
                j--;
            }
            if(i<j) swap(arr[i], arr[j]);
        }
        swap(arr[low], arr[j]);
        return j;
    }
};