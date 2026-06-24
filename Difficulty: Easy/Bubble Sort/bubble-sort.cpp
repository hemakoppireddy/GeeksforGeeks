class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        for(int i=n-1; i>=0; i--) {
            int flag=0;
            for(int j=0; j<=i-1; j++) {
                if(arr[j]>arr[j+1]) {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    
                    flag=1;
                }
            }
            if(flag==0) break;
        } 
    }
};