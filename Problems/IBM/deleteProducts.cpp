#include <bits/stdc++.h>
using namespace std;


vector<int> deleteProducts(vector<int> ids, int m){
    unordered_map<int, int> freq;
    for (int id: ids){
        freq[id]++;
    }
    vector<int> counts;
    counts.reserve(freq.size()); // avoids repeated reallocation
    for (const auto& [id,count]: freq){
        counts.push_back(count);
    }
    sort(counts.begin(), counts.end());
    int distinct = counts.size();
    for (int count: counts){
        if (m >=count){
            m-=count;
            distinct--;
        }
    }
    return distinct;

}