example: arr = [1,3,5,7,9]
minimum sum is: 1+3+5+7 = 16
maximum sum is: 3+5+7+9 = 24
the function should print 16 24


void miniMaxSum(vector<int> arr) {
    long long total=0;
    int minval=arr[0];
    int maxval=arr[0];
    for (int i=0; i<arr.size(); i++){
        total += arr[i];
        if (arr[i]< minval){
            minval= arr[i];
        }
        if (arr[i]> maxval){
            maxval = arr[i];
        }
        
        }
     cout<<  total-maxval<< " " <<total-minval <<endl; 
    }