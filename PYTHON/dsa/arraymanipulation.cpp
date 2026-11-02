def arraymanipulation(n,queries):
    diff = [0] * (n+2)
    for a,b,k in queries:
        diff[a] += k
        diff[b+1] -= k
    curr=0;
    maxi =0;
    for i in range(1,n+1):
        curr += diff[i]
        maxi = max(maxi, curr)
    return maxi