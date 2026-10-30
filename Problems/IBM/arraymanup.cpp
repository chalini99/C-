You are given an array of size n, initially filled with zeros.

You receive operations in this format:

a b k

Meaning:
- Start at index a.
- End at index b.
- Add k to every element between a and b, including both.
After performing all operations, find the maximum element in the array
n = 5
queries = [
    [1, 2, 100],
    [2, 5, 100],
    [3, 4, 100]
]


long arrmanipul(int n, vector<vector<int>> queries){
    vector<long> diff(n+2,0);
    for (auto q:queries){
        int a = q[0];
        int b = q[1];
        int k = q[2];
        diff[a] += k;
        diff[b+1] -=k;

    }
    long sum=0;
    long maxi=0;
    for(int i=1; i<=0; i++){
        sum += diff[i];
        maxi = max(maxi,sum);
    }
    return maxi;
}
