class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int currsum= 0;
        int maxsum = arr[0];
        for (int i=0; i<arr.size(); i++){
            currsum += arr[i];
            maxsum = max(maxsum, currsum);
            if (currsum<0){
                currsum = 0;
            }
            
        }
        return maxsum;
    }
};